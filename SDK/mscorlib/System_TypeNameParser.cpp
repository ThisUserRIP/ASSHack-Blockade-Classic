#include "System_TypeNameParser.h"

IL2CPP::Il2CppClass* mscorlib::System::TypeNameParser::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "TypeNameParser");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::TypeNameParser::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Type* mscorlib::System::TypeNameParser::GetType(mscorlib::System::String* typeName, mscorlib::System::Func_2<mscorlib::System::Reflection::AssemblyName, mscorlib::System::Reflection::Assembly>* assemblyResolver, mscorlib::System::Func_4<mscorlib::System::Reflection::Assembly, mscorlib::System::String, mscorlib::System::Boolean, mscorlib::System::Type>* typeResolver, bool throwOnError, bool ignoreCase, mscorlib::System::Threading::StackCrawlMark& stackMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetType", std::vector<std::string> { "System.String", "System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>", "System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>", "System.Boolean", "System.Boolean", "System.Threading.StackCrawlMark&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)typeName;
	params[1] = (intptr_t)assemblyResolver;
	params[2] = (intptr_t)typeResolver;
	params[3] = (intptr_t)&throwOnError;
	params[4] = (intptr_t)&ignoreCase;
	params[5] = (intptr_t)&stackMark;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
