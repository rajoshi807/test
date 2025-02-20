# Create an XML structure using angle brackets
$xmlContent = @"
<bookstore>
    <book>
        <title>Introduction to PowerShell</title>
        <author>John Doe</author>
        <year>2023</year>
    </book>
    <book>
        <title>Advanced PowerShell Scripting</title>
        <author>Jane Smith</author>
        <year>2022</year>
    </book>
</bookstore>
"@

# Convert the string to an XML object
[xml]$xmlDocument = $xmlContent

# Output the XML
$xmlDocument

# Access specific XML elements
$xmlDocument.bookstore.book | ForEach-Object {
    Write-Host "Book Title: $($_.title)"
    Write-Host "Author: $($_.author)"
    Write-Host "Year: $($_.year)"
}

Write-Host "Hello, PowerShell!"

# Loop through an array
$fruits = @("Apple", "Banana", "Cherry")
foreach ($fruit in $fruits) {
    Write-Host $fruit
}

# PowerShell Module file (MyModule.psm1)

Function Get-Greeting {
    param(
        [string]$Name
    )
    return "Hello, $Name!"
}

Export-ModuleMember -Function Get-Greeting

@{
    ModuleVersion = '1.0.0'
    GUID = 'd9b98c8f-0d6d-4b9a-a7a4-bad9149a3c87'
    Author = 'Your Name'
    Description = 'Sample PowerShell Module'
    FunctionsToExport = @('Get-BookInfo')
    CmdletsToExport = @()
    VariablesToExport = @()
    PrivateData = @{
        PSData = @{
            Tags = @('PowerShell', 'Module')
            LicenseUri = 'https://opensource.org/licenses/MIT'
            ProjectUri = 'https://github.com/yourname/YourModule'
        }
    }
}
