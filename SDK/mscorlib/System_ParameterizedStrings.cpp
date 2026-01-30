#include "System_ParameterizedStrings.h"

IL2CPP::Il2CppClass* mscorlib::System::ParameterizedStrings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "ParameterizedStrings");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::ParameterizedStrings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* mscorlib::System::ParameterizedStrings::Evaluate(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Evaluate", std::vector<std::string> { "System.String", "System.ParameterizedStrings/FormatParam[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::ParameterizedStrings::EvaluateInternal(mscorlib::System::String* format, int32_t& pos, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>* args, mscorlib::System::ParameterizedStrings_LowLevelStack* stack, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>& dynamicVars, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>& staticVars)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EvaluateInternal", std::vector<std::string> { "System.String", "System.Int32&", "System.ParameterizedStrings/FormatParam[]", "System.ParameterizedStrings/LowLevelStack", "System.ParameterizedStrings/FormatParam[]&", "System.ParameterizedStrings/FormatParam[]&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)&pos;
	params[2] = (intptr_t)args;
	params[3] = (intptr_t)stack;
	params[4] = (intptr_t)&dynamicVars;
	params[5] = (intptr_t)&staticVars;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::ParameterizedStrings::AsBool(int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AsBool", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::ParameterizedStrings::AsInt(bool b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AsInt", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::ParameterizedStrings::StringFromAsciiBytes(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StringFromAsciiBytes", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t mscorlib::System::ParameterizedStrings::snprintf(uint8_t* str, intptr_t size, mscorlib::System::String* format, mscorlib::System::String* arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "snprintf", std::vector<std::string> { "System.Byte*", "System.IntPtr", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&size;
	params[2] = (intptr_t)format;
	params[3] = (intptr_t)arg1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::ParameterizedStrings::snprintf(uint8_t* str, intptr_t size, mscorlib::System::String* format, int32_t arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "snprintf", std::vector<std::string> { "System.Byte*", "System.IntPtr", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&size;
	params[2] = (intptr_t)format;
	params[3] = (intptr_t)&arg1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::ParameterizedStrings::FormatPrintF(mscorlib::System::String* format, mscorlib::System::Object* arg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatPrintF", std::vector<std::string> { "System.String", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)arg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>* mscorlib::System::ParameterizedStrings::GetDynamicOrStaticVariables(wchar_t c, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>& dynamicVars, IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>& staticVars, int32_t& index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDynamicOrStaticVariables", std::vector<std::string> { "System.Char", "System.ParameterizedStrings/FormatParam[]&", "System.ParameterizedStrings/FormatParam[]&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&c;
	params[1] = (intptr_t)&dynamicVars;
	params[2] = (intptr_t)&staticVars;
	params[3] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::ParameterizedStrings_FormatParam>*)returnValue;
}
