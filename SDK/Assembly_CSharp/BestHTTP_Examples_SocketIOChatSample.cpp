#include "BestHTTP_Examples_SocketIOChatSample.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "SocketIOChatSample");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::DrawLoginScreen()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawLoginScreen");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::DrawChatScreen()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawChatScreen");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::SetUserName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUserName");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::SendMessage()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendMessage");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::UpdateTyping()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateTyping");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::addParticipantsMessage(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "addParticipantsMessage", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::addChatMessage(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "addChatMessage", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::AddChatTyping(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddChatTyping", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::RemoveChatTyping(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveChatTyping", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::OnLogin(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnLogin", std::vector<std::string> { "BestHTTP.SocketIO.Socket", "BestHTTP.SocketIO.Packet", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)packet;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::OnNewMessage(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnNewMessage", std::vector<std::string> { "BestHTTP.SocketIO.Socket", "BestHTTP.SocketIO.Packet", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)packet;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::OnUserJoined(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnUserJoined", std::vector<std::string> { "BestHTTP.SocketIO.Socket", "BestHTTP.SocketIO.Packet", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)packet;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::OnUserLeft(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnUserLeft", std::vector<std::string> { "BestHTTP.SocketIO.Socket", "BestHTTP.SocketIO.Packet", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)packet;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::OnTyping(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnTyping", std::vector<std::string> { "BestHTTP.SocketIO.Socket", "BestHTTP.SocketIO.Packet", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)packet;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::OnStopTyping(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStopTyping", std::vector<std::string> { "BestHTTP.SocketIO.Socket", "BestHTTP.SocketIO.Packet", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)packet;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::_DrawLoginScreen_b__15_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<DrawLoginScreen>b__15_0");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample::_DrawChatScreen_b__16_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<DrawChatScreen>b__16_0");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
