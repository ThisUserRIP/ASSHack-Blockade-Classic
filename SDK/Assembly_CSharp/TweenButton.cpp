#include "TweenButton.h"

IL2CPP::Il2CppClass* Assembly_CSharp::TweenButton::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "TweenButton");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::TweenButton::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::TweenButton::_ctor(Assembly_CSharp::GUIGS _guigs, UnityEngine_CoreModule::UnityEngine::Vector2 _myOffset, Assembly_CSharp::OFFSET_TYPE _offset_type, UnityEngine_CoreModule::UnityEngine::Texture2D* _primary, UnityEngine_CoreModule::UnityEngine::Texture2D* _background, UnityEngine_CoreModule::UnityEngine::Texture2D* _secondary, UnityEngine_CoreModule::UnityEngine::Texture2D* _selected, UnityEngine_AudioModule::UnityEngine::AudioClip* _hover_melody, UnityEngine_AudioModule::UnityEngine::AudioClip* _press_melody, UnityEngine_AudioModule::UnityEngine::AudioSource* _AS, float _hover_melody_prepause, float _tween_scale, int32_t _rotate_speed, float _org_width, float _org_height, float _force_angle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "GUIGS", "UnityEngine.Vector2", "OFFSET_TYPE", "UnityEngine.Texture2D", "UnityEngine.Texture2D", "UnityEngine.Texture2D", "UnityEngine.Texture2D", "UnityEngine.AudioClip", "UnityEngine.AudioClip", "UnityEngine.AudioSource", "System.Single", "System.Single", "System.Int32", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[16];
	params[0] = (intptr_t)&_guigs;
	params[1] = (intptr_t)&_myOffset;
	params[2] = (intptr_t)&_offset_type;
	params[3] = (intptr_t)_primary;
	params[4] = (intptr_t)_background;
	params[5] = (intptr_t)_secondary;
	params[6] = (intptr_t)_selected;
	params[7] = (intptr_t)_hover_melody;
	params[8] = (intptr_t)_press_melody;
	params[9] = (intptr_t)_AS;
	params[10] = (intptr_t)&_hover_melody_prepause;
	params[11] = (intptr_t)&_tween_scale;
	params[12] = (intptr_t)&_rotate_speed;
	params[13] = (intptr_t)&_org_width;
	params[14] = (intptr_t)&_org_height;
	params[15] = (intptr_t)&_force_angle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::TweenButton::DrawButton(UnityEngine_CoreModule::UnityEngine::Vector2 mpos, UnityEngine_CoreModule::UnityEngine::Vector2 newPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawButton", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mpos;
	params[1] = (intptr_t)&newPos;
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
void Assembly_CSharp::TweenButton::Tween(bool hover, UnityEngine_CoreModule::UnityEngine::Vector2 newPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Tween", std::vector<std::string> { "System.Boolean", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hover;
	params[1] = (intptr_t)&newPos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TweenButton::BiggerTween(bool hover)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BiggerTween", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hover;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TweenButton::RotateTween(bool hover)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateTween", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hover;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TweenButton::GlowTween(bool hover)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GlowTween", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hover;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TweenButton::DropSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DropSize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::TweenButton::GO()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GO");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
