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

int main() 
{ 
    char a = 30; 
    char b = 40; 
    char c = 10; 
    char d = (a * b) / c;   
    vector<int>hello;
    return 0; 
} 
