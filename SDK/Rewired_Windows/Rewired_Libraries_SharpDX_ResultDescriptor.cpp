#include "Rewired_Libraries_SharpDX_ResultDescriptor.h"

IL2CPP::Il2CppClass* Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "Rewired.Libraries.SharpDX", "ResultDescriptor");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::_ctor(Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE code, mscorlib::System::String* module, mscorlib::System::String* nativeApiCode, mscorlib::System::String* apiCode, mscorlib::System::String* description)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "xGnfhdIDCRLDgjIyJZBsyMlJUKE", "System.String", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&code;
	params[1] = (intptr_t)module;
	params[2] = (intptr_t)nativeApiCode;
	params[3] = (intptr_t)apiCode;
	params[4] = (intptr_t)description;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::get_Result()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Result");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE ret;
		std::memset(&ret, 0, sizeof(Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE));
		return ret;
	}
	return static_cast<Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE>(*(Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE*)il2cpp_object_unbox(returnValue));
}
void Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::set_Result(Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Result", std::vector<std::string> { "xGnfhdIDCRLDgjIyJZBsyMlJUKE" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::get_Module()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Module");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::set_Module(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Module", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::get_NativeApiCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NativeApiCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::set_NativeApiCode(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_NativeApiCode", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::get_ApiCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ApiCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::set_ApiCode(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ApiCode", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::get_Description()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Description");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::set_Description(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Description", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::Equals(Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "Rewired.Libraries.SharpDX.ResultDescriptor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
int32_t Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor* Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::Find(Rewired_Windows::xGnfhdIDCRLDgjIyJZBsyMlJUKE result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Find", std::vector<std::string> { "xGnfhdIDCRLDgjIyJZBsyMlJUKE" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor*)returnValue;
}
void Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::AddDescriptorsFromType(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDescriptorsFromType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::GetDescriptionFromResultCode(int32_t resultCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDescriptionFromResultCode", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resultCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
uint32_t Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::FormatMessageW(int32_t dwFlags, intptr_t lpSource, int32_t dwMessageId, int32_t dwLanguageId, intptr_t& lpBuffer, int32_t nSize, intptr_t Arguments)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatMessageW", std::vector<std::string> { "System.Int32", "System.IntPtr", "System.Int32", "System.Int32", "System.IntPtr&", "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&dwFlags;
	params[1] = (intptr_t)&lpSource;
	params[2] = (intptr_t)&dwMessageId;
	params[3] = (intptr_t)&dwLanguageId;
	params[4] = (intptr_t)&lpBuffer;
	params[5] = (intptr_t)&nSize;
	params[6] = (intptr_t)&Arguments;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Windows::Rewired::Libraries::SharpDX::ResultDescriptor::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
