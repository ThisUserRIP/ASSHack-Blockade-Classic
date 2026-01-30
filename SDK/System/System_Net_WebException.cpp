#include "System_Net_WebException.h"

IL2CPP::Il2CppClass* System::System::Net::WebException::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "WebException");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::WebException::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::WebException::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebException::_ctor(mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebException::_ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Exception" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerException;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebException::_ctor(mscorlib::System::String* message, System::Net::WebExceptionStatus status)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Net.WebExceptionStatus" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)&status;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebException::_ctor(mscorlib::System::String* message, System::Net::WebExceptionStatus status, System::Net::WebExceptionInternalStatus internalStatus, mscorlib::System::Exception* innerException)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Net.WebExceptionStatus", "System.Net.WebExceptionInternalStatus", "System.Exception" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)&status;
	params[2] = (intptr_t)&internalStatus;
	params[3] = (intptr_t)innerException;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebException::_ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Exception", "System.Net.WebExceptionStatus", "System.Net.WebResponse" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerException;
	params[2] = (intptr_t)&status;
	params[3] = (intptr_t)response;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebException::_ctor(mscorlib::System::String* message, mscorlib::System::String* data, mscorlib::System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.Exception", "System.Net.WebExceptionStatus", "System.Net.WebResponse" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)innerException;
	params[3] = (intptr_t)&status;
	params[4] = (intptr_t)response;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebException::_ctor(mscorlib::System::String* message, mscorlib::System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response, System::Net::WebExceptionInternalStatus internalStatus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Exception", "System.Net.WebExceptionStatus", "System.Net.WebResponse", "System.Net.WebExceptionInternalStatus" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)innerException;
	params[2] = (intptr_t)&status;
	params[3] = (intptr_t)response;
	params[4] = (intptr_t)&internalStatus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebException::_ctor(mscorlib::System::String* message, mscorlib::System::String* data, mscorlib::System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response, System::Net::WebExceptionInternalStatus internalStatus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.Exception", "System.Net.WebExceptionStatus", "System.Net.WebResponse", "System.Net.WebExceptionInternalStatus" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)innerException;
	params[3] = (intptr_t)&status;
	params[4] = (intptr_t)response;
	params[5] = (intptr_t)&internalStatus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebException::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext)
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
void System::System::Net::WebException::System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext)
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
void System::System::Net::WebException::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* serializationInfo, mscorlib::System::Runtime::Serialization::StreamingContext streamingContext)
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
System::System::Net::WebExceptionStatus System::System::Net::WebException::get_Status()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Status");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::WebExceptionStatus ret;
		std::memset(&ret, 0, sizeof(System::Net::WebExceptionStatus));
		return ret;
	}
	return static_cast<System::Net::WebExceptionStatus>(*(System::Net::WebExceptionStatus*)il2cpp_object_unbox(returnValue));
}
