Module Program
    Sub Main(args As String())
        Console.Write("Please enter your name: ")
        Dim name = Console.ReadLine()
        Dim currentDate = DateTime.Now
        Console.WriteLine($"Hello, {name}, on {currentDate:d} at {currentDate:t}")
        Console.Write("Press any key to continue...")
        Console.ReadKey(True)
    End Sub
End Module

Imports System.Xml

Public Class XMLExample
    Public Sub ParseXML()
        ' XML content with angle brackets
        Dim xmlString As String = "<person><name>John Doe</name><age>30</age></person>"

        ' Load XML into an XmlDocument
        Dim xmlDoc As New XmlDocument()
        xmlDoc.LoadXml(xmlString)

        ' Access the elements in XML
        Dim name As String = xmlDoc.SelectSingleNode("//name").InnerText
        Dim age As String = xmlDoc.SelectSingleNode("//age").InnerText

        ' Display the extracted values
        Console.WriteLine("Name: " & name)
        Console.WriteLine("Age: " & age)
    End Sub
End Class
