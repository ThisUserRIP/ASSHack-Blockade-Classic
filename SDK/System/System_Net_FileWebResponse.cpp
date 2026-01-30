#include "System_Net_FileWebResponse.h"

IL2CPP::Il2CppClass* System::System::Net::FileWebResponse::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "FileWebResponse");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::FileWebResponse::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::FileWebResponse::_ctor(System::Net::FileWebRequest* request, System::Uri* uri, mscorlib::System::IO::FileAccess access, bool asyncHint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Net.FileWebRequest", "System.Uri", "System.IO.FileAccess", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)uri;
	params[2] = (intptr_t)&access;
	params[3] = (intptr_t)&asyncHint;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::FileWebResponse::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serializationInfo;
	params[1] = (intptr_t)&streamingContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::FileWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serializationInfo;
	params[1] = (intptr_t)&streamingContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::FileWebResponse::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serializationInfo;
	params[1] = (intptr_t)&streamingContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::WebHeaderCollection* System::System::Net::FileWebResponse::get_Headers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Headers");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::WebHeaderCollection*)returnValue;
}
System::System::Uri* System::System::Net::FileWebResponse::get_ResponseUri()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ResponseUri");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Uri*)returnValue;
}
void System::System::Net::FileWebResponse::CheckDisposed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckDisposed");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::FileWebResponse::Close()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::FileWebResponse::System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Net.ICloseEx.CloseEx", std::vector<std::string> { "System.Net.CloseExState" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&closeState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IO::Stream* System::System::Net::FileWebResponse::GetResponseStream()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResponseStream");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::Stream*)returnValue;
}
