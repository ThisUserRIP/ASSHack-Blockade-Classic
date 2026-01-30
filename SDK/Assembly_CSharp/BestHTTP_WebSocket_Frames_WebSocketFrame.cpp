#include "BestHTTP_WebSocket_Frames_WebSocketFrame.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.WebSocket.Frames", "WebSocketFrame");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::get_Type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Type");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes>(*(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::set_Type(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Type", std::vector<std::string> { "BestHTTP.WebSocket.Frames.WebSocketFrameTypes" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::get_IsFinal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsFinal");
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
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::set_IsFinal(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_IsFinal", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint8_t Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::get_Header()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Header");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::set_Header(uint8_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Header", std::vector<std::string> { "System.Byte" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::get_Data()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Data");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::set_Data(IL2CPP::Array<uint8_t>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Data", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::get_DataLength()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DataLength");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::set_DataLength(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DataLength", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::get_UseExtensions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UseExtensions");
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
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::set_UseExtensions(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UseExtensions", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::_ctor(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes type, IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "BestHTTP.WebSocket.Frames.WebSocketFrameTypes", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)webSocket;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::_ctor(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes type, IL2CPP::Array<uint8_t>* data, bool useExtensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "BestHTTP.WebSocket.Frames.WebSocketFrameTypes", "System.Byte[]", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)webSocket;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)data;
	params[3] = (intptr_t)&useExtensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::_ctor(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes type, IL2CPP::Array<uint8_t>* data, bool isFinal, bool useExtensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "BestHTTP.WebSocket.Frames.WebSocketFrameTypes", "System.Byte[]", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)webSocket;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)data;
	params[3] = (intptr_t)&isFinal;
	params[4] = (intptr_t)&useExtensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::_ctor(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes type, IL2CPP::Array<uint8_t>* data, uint64_t pos, uint64_t length, bool isFinal, bool useExtensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "BestHTTP.WebSocket.Frames.WebSocketFrameTypes", "System.Byte[]", "System.UInt64", "System.UInt64", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)webSocket;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)data;
	params[3] = (intptr_t)&pos;
	params[4] = (intptr_t)&length;
	params[5] = (intptr_t)&isFinal;
	params[6] = (intptr_t)&useExtensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::WebSocket::Frames::RawFrameData Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::Get()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::WebSocket::Frames::RawFrameData ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::WebSocket::Frames::RawFrameData));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::WebSocket::Frames::RawFrameData>(*(Assembly_CSharp::BestHTTP::WebSocket::Frames::RawFrameData*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame*>* Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame::Fragment(uint16_t maxFragmentSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Fragment", std::vector<std::string> { "System.UInt16" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&maxFragmentSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame*>*)returnValue;
}
