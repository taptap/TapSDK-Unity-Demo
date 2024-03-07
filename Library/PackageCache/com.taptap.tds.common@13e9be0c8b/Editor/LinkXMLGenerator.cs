using System.Collections.Generic;
using System.IO;
using System.Xml;
using UnityEngine;
using UnityEditor;

namespace TapTap.Common.Editor {
    public class LinkedAssembly {
        public string Fullname { get; set; }
        public string[] Types { get; set; }
    }

    public class LinkXMLGenerator {
        public static void Generate(string path, IEnumerable<LinkedAssembly> assemblies) {
            DirectoryInfo parent = Directory.GetParent(path);
            if (!parent.Exists) {
                Directory.CreateDirectory(parent.FullName);
            }

            XmlDocument doc = new XmlDocument();

            XmlNode rootNode = doc.CreateElement("linker");
            doc.AppendChild(rootNode);

            foreach (LinkedAssembly assembly in assemblies) {
                XmlNode assemblyNode = doc.CreateElement("assembly");

                XmlAttribute fullnameAttr = doc.CreateAttribute("fullname");
                fullnameAttr.Value = assembly.Fullname;
                assemblyNode.Attributes.Append(fullnameAttr);

                if (assembly.Types?.Length > 0) {
                    foreach (string type in assembly.Types) {
                        XmlNode typeNode = doc.CreateElement("type");
                        XmlAttribute typeFullnameAttr = doc.CreateAttribute("fullname");
                        typeFullnameAttr.Value = type;
                        typeNode.Attributes.Append(typeFullnameAttr);

                        XmlAttribute typePreserveAttr = doc.CreateAttribute("preserve");
                        typePreserveAttr.Value = "all";
                        typeNode.Attributes.Append(typePreserveAttr);

                        assemblyNode.AppendChild(typeNode);
                    }
                } else {
                    XmlAttribute preserveAttr = doc.CreateAttribute("preserve");
                    preserveAttr.Value = "all";
                    assemblyNode.Attributes.Append(preserveAttr);
                }

                rootNode.AppendChild(assemblyNode);
            }

            doc.Save(path);
            AssetDatabase.Refresh();

            Debug.Log($"Generate {path} done.");
            Debug.Log(doc.OuterXml);
        }

        public static void Delete(string path) {
            if (File.Exists(path)) {
                File.Delete(path);
                AssetDatabase.Refresh();
            }

            Debug.Log($"Delete {path} done.");
        }
    }
}
