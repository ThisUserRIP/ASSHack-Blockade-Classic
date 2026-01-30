#include "System_Security_SecurityDocument.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::SecurityDocument::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security", "SecurityDocument");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::SecurityDocument::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::SecurityDocument::_ctor(int32_t numData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&numData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::SecurityDocument::GuaranteeSize(int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GuaranteeSize", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::SecurityDocument::AddString(mscorlib::System::String* str, int32_t& position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddString", std::vector<std::string> { "System.String", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::SecurityDocument::AppendString(mscorlib::System::String* str, int32_t& position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendString", std::vector<std::string> { "System.String", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Security::SecurityDocument::EncodedStringSize(mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodedStringSize", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
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
mscorlib::System::String* mscorlib::System::Security::SecurityDocument::GetString(int32_t& position, bool bCreate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetString", std::vector<std::string> { "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&bCreate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Security::SecurityDocument::AddToken(uint8_t b, int32_t& position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToken", std::vector<std::string> { "System.Byte", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&b;
	params[1] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::SecurityElement* mscorlib::System::Security::SecurityDocument::GetRootElement()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRootElement");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::SecurityElement*)returnValue;
}
mscorlib::System::Security::SecurityElement* mscorlib::System::Security::SecurityDocument::GetElement(int32_t position, bool bCreate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElement", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&bCreate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::SecurityElement*)returnValue;
}
mscorlib::System::Security::SecurityElement* mscorlib::System::Security::SecurityDocument::InternalGetElement(int32_t& position, bool bCreate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetElement", std::vector<std::string> { "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&bCreate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::SecurityElement*)returnValue;
}
