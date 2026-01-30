#include "com_playGenesis_VkUnityPlugin_VKAttachment.h"

IL2CPP::Il2CppClass* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "com.playGenesis.VkUnityPlugin", "VKAttachment");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::Deserialize(mscorlib::System::Object* attachment)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deserialize", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attachment;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_type");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_type(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_type", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAudio* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_audio()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_audio");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAudio*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_audio(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAudio* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_audio", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKAudio" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKVideo* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_video()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_video");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKVideo*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_video(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKVideo* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_video", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKVideo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPhoto* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_photo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_photo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPhoto*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_photo(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPhoto* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_photo", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKPhoto" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPoll* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_poll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_poll");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPoll*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_poll(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPoll* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_poll", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKPoll" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKDocument* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_doc()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_doc");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKDocument*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_doc(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKDocument* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_doc", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKDocument" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLink* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_link()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_link");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLink*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_link(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKLink* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_link", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKLink" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_wall()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_wall");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_wall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKWallPost* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_wall", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKWallPost" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKNote* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_note()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_note");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKNote*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_note(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKNote* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_note", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKNote" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPage* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::get_Page()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Page");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPage*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::set_Page(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPage* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Page", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKPage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKAttachment::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
