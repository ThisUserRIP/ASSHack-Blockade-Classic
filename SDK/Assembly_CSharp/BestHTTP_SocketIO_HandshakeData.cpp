#include "BestHTTP_SocketIO_HandshakeData.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SocketIO", "HandshakeData");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::get_Sid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Sid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::set_Sid(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Sid", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::get_Upgrades()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Upgrades");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::set_Upgrades(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Upgrades", std::vector<std::string> { "System.Collections.Generic.List`1<System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::TimeSpan Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::get_PingInterval()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PingInterval");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeSpan ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeSpan));
		return ret;
	}
	return static_cast<mscorlib::System::TimeSpan>(*(mscorlib::System::TimeSpan*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::set_PingInterval(mscorlib::System::TimeSpan value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_PingInterval", std::vector<std::string> { "System.TimeSpan" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::TimeSpan Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::get_PingTimeout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PingTimeout");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeSpan ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeSpan));
		return ret;
	}
	return static_cast<mscorlib::System::TimeSpan>(*(mscorlib::System::TimeSpan*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::set_PingTimeout(mscorlib::System::TimeSpan value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_PingTimeout", std::vector<std::string> { "System.TimeSpan" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::Parse(mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
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
mscorlib::System::Object* Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::Get(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::GetString(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetString", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::GetStringList(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStringList", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
int32_t Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::GetInt(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* from, mscorlib::System::String* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInt", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)key;
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
void Assembly_CSharp::BestHTTP::SocketIO::HandshakeData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
