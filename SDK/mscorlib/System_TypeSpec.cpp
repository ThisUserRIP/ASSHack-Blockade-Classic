#include "System_TypeSpec.h"

IL2CPP::Il2CppClass* mscorlib::System::TypeSpec::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "TypeSpec");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::TypeSpec::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::TypeSpec::get_HasModifiers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasModifiers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::TypeSpec::GetDisplayFullName(mscorlib::System::TypeSpec_DisplayNameFormat flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDisplayFullName", std::vector<std::string> { "System.TypeSpec/DisplayNameFormat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Text::StringBuilder* mscorlib::System::TypeSpec::GetModifierString(mscorlib::System::Text::StringBuilder* sb)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetModifierString", std::vector<std::string> { "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sb;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::StringBuilder*)returnValue;
}
mscorlib::System::String* mscorlib::System::TypeSpec::get_DisplayFullName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DisplayFullName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::TypeSpec* mscorlib::System::TypeSpec::Parse(mscorlib::System::String* typeName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)typeName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TypeSpec*)returnValue;
}
mscorlib::System::String* mscorlib::System::TypeSpec::UnescapeInternalName(mscorlib::System::String* displayName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnescapeInternalName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)displayName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Type* mscorlib::System::TypeSpec::Resolve(mscorlib::System::Func_2<mscorlib::System::Reflection::AssemblyName, mscorlib::System::Reflection::Assembly>* assemblyResolver, mscorlib::System::Func_4<mscorlib::System::Reflection::Assembly, mscorlib::System::String, mscorlib::System::Boolean, mscorlib::System::Type>* typeResolver, bool throwOnError, bool ignoreCase)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Resolve", std::vector<std::string> { "System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>", "System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)assemblyResolver;
	params[1] = (intptr_t)typeResolver;
	params[2] = (intptr_t)&throwOnError;
	params[3] = (intptr_t)&ignoreCase;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void mscorlib::System::TypeSpec::AddName(mscorlib::System::String* type_name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type_name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TypeSpec::AddModifier(mscorlib::System::ModifierSpec* md)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddModifier", std::vector<std::string> { "System.ModifierSpec" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)md;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TypeSpec::SkipSpace(mscorlib::System::String* name, int32_t& pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SkipSpace", std::vector<std::string> { "System.String", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TypeSpec::BoundCheck(int32_t idx, mscorlib::System::String* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BoundCheck", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&idx;
	params[1] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::TypeIdentifier* mscorlib::System::TypeSpec::ParsedTypeIdentifier(mscorlib::System::String* displayName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParsedTypeIdentifier", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)displayName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TypeIdentifier*)returnValue;
}
mscorlib::System::TypeSpec* mscorlib::System::TypeSpec::Parse(mscorlib::System::String* name, int32_t& p, bool is_recurse, bool allow_aqn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String", "System.Int32&", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&p;
	params[2] = (intptr_t)&is_recurse;
	params[3] = (intptr_t)&allow_aqn;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TypeSpec*)returnValue;
}
void mscorlib::System::TypeSpec::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
