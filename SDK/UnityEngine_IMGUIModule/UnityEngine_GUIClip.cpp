#include "UnityEngine_GUIClip.h"

IL2CPP::Il2CppClass* UnityEngine_IMGUIModule::UnityEngine::GUIClip::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.IMGUIModule.dll", "UnityEngine", "GUIClip");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_IMGUIModule::UnityEngine::GUIClip::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::GUIClip::get_visibleRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_visibleRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::Internal_Push(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_CoreModule::UnityEngine::Vector2 scrollOffset, UnityEngine_CoreModule::UnityEngine::Vector2 renderOffset, bool resetOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Push", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)&scrollOffset;
	params[2] = (intptr_t)&renderOffset;
	params[3] = (intptr_t)&resetOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::Internal_Pop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Pop");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIClip::Unclip_Vector2(UnityEngine_CoreModule::UnityEngine::Vector2 pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unclip_Vector2", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIClip::UnclipToWindow_Vector2(UnityEngine_CoreModule::UnityEngine::Vector2 pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnclipToWindow_Vector2", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIClip::ClipToWindow_Vector2(UnityEngine_CoreModule::UnityEngine::Vector2 absolutePos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClipToWindow_Vector2", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&absolutePos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Matrix4x4 UnityEngine_IMGUIModule::UnityEngine::GUIClip::GetMatrix()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMatrix");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Matrix4x4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Matrix4x4>(*(UnityEngine_CoreModule::UnityEngine::Matrix4x4*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::SetMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMatrix", std::vector<std::string> { "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&m;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::Push(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_CoreModule::UnityEngine::Vector2 scrollOffset, UnityEngine_CoreModule::UnityEngine::Vector2 renderOffset, bool resetOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Push", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)&scrollOffset;
	params[2] = (intptr_t)&renderOffset;
	params[3] = (intptr_t)&resetOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::Pop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pop");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIClip::Unclip(UnityEngine_CoreModule::UnityEngine::Vector2 pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unclip", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIClip::UnclipToWindow(UnityEngine_CoreModule::UnityEngine::Vector2 pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnclipToWindow", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIClip::ClipToWindow(UnityEngine_CoreModule::UnityEngine::Vector2 absolutePos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClipToWindow", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&absolutePos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::get_visibleRect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_visibleRect_Injected", std::vector<std::string> { "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::Internal_Push_Injected(UnityEngine_CoreModule::UnityEngine::Rect& screenRect, UnityEngine_CoreModule::UnityEngine::Vector2& scrollOffset, UnityEngine_CoreModule::UnityEngine::Vector2& renderOffset, bool resetOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Push_Injected", std::vector<std::string> { "UnityEngine.Rect&", "UnityEngine.Vector2&", "UnityEngine.Vector2&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)&scrollOffset;
	params[2] = (intptr_t)&renderOffset;
	params[3] = (intptr_t)&resetOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::Unclip_Vector2_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& pos, UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unclip_Vector2_Injected", std::vector<std::string> { "UnityEngine.Vector2&", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pos;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::UnclipToWindow_Vector2_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& pos, UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnclipToWindow_Vector2_Injected", std::vector<std::string> { "UnityEngine.Vector2&", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pos;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::ClipToWindow_Vector2_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& absolutePos, UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClipToWindow_Vector2_Injected", std::vector<std::string> { "UnityEngine.Vector2&", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&absolutePos;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::GetMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMatrix_Injected", std::vector<std::string> { "UnityEngine.Matrix4x4&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIClip::SetMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMatrix_Injected", std::vector<std::string> { "UnityEngine.Matrix4x4&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&m;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
