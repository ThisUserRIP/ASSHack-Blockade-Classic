#include "UnityEngine_U2D_SpriteDataAccessExtensions.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::U2D::SpriteDataAccessExtensions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.U2D", "SpriteDataAccessExtensions");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::U2D::SpriteDataAccessExtensions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16> UnityEngine_CoreModule::UnityEngine::U2D::SpriteDataAccessExtensions::GetIndices(UnityEngine_CoreModule::UnityEngine::Sprite* sprite)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIndices", std::vector<std::string> { "UnityEngine.Sprite" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sprite;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16> ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>>(*(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo UnityEngine_CoreModule::UnityEngine::U2D::SpriteDataAccessExtensions::GetIndicesInfo(UnityEngine_CoreModule::UnityEngine::Sprite* sprite)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIndicesInfo", std::vector<std::string> { "UnityEngine.Sprite" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sprite;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo>(*(UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo UnityEngine_CoreModule::UnityEngine::U2D::SpriteDataAccessExtensions::GetChannelInfo(UnityEngine_CoreModule::UnityEngine::Sprite* sprite, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChannelInfo", std::vector<std::string> { "UnityEngine.Sprite", "UnityEngine.Rendering.VertexAttribute" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sprite;
	params[1] = (intptr_t)&channel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo>(*(UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::U2D::SpriteDataAccessExtensions::GetIndicesInfo_Injected(UnityEngine_CoreModule::UnityEngine::Sprite* sprite, UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIndicesInfo_Injected", std::vector<std::string> { "UnityEngine.Sprite", "UnityEngine.U2D.SpriteChannelInfo&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sprite;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::U2D::SpriteDataAccessExtensions::GetChannelInfo_Injected(UnityEngine_CoreModule::UnityEngine::Sprite* sprite, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChannelInfo_Injected", std::vector<std::string> { "UnityEngine.Sprite", "UnityEngine.Rendering.VertexAttribute", "UnityEngine.U2D.SpriteChannelInfo&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sprite;
	params[1] = (intptr_t)&channel;
	params[2] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
