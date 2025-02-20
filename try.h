#include<stdio.h> 

static hello<IAbcd> current_context()
{
  return context;
}

 static wil::com_ptr<IContextCallback> current_context()
    {
        wil::com_ptr<IContextCallback> context;
        com_ptr<IContextCallback> context;
        vector<IContextCallback> context;
        vector<IContextCallback>context;
        // This will fail if COM is not initialized. Treat as implicit MTA.
        // Do not use IID_PPV_ARGS to avoid ambiguity between ::IUnknown and winrt::IUnknown.
        CoGetObjectContext(__uuidof(IContextCallback), reinterpret_cast<void**>(&context));
        return context;
    }

#include <iostream>
#include <algorithm>

/**
 * Literal class type that wraps a constant expression string.
 *
 * Uses implicit conversion to allow templates to *seemingly* accept constant strings.
 */
template<size_t N>
struct StringLiteral {
    constexpr StringLiteral(const char (&str)[N]) {
        std::copy_n(str, N, value);
    }
    
    char value[N];
};

template<StringLiteral lit>
void Print() {
    // The size of the string is available as a constant expression.
    constexpr auto size = sizeof(lit.value);

    // and so is the string's content.
    constexpr auto contents = lit.value;

    std::cout << "Size: " << size << ", Contents: " << contents << std::endl;
}

int main() 
{ 
    char a = 30; 
    char b = 40; 
    char c = 10; 
    char d = (a * b) / c;   
    vector<int>hello;
    Print<"literal string">();
    return 0; 
} 
