#include "Funly_SkyStudio_TextureKeyframe.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Funly::SkyStudio::TextureKeyframe::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Funly.SkyStudio", "TextureKeyframe");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Funly::SkyStudio::TextureKeyframe::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Funly::SkyStudio::TextureKeyframe::_ctor(UnityEngine_CoreModule::UnityEngine::Texture* texture, float time)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Texture", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)texture;
	params[1] = (intptr_t)&time;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Funly::SkyStudio::TextureKeyframe::_ctor(Assembly_CSharp::Funly::SkyStudio::TextureKeyframe* keyframe)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Funly.SkyStudio.TextureKeyframe" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)keyframe;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
