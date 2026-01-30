#include "UnityEngine_GUI.h"

IL2CPP::Il2CppClass* UnityEngine_IMGUIModule::UnityEngine::GUI::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.IMGUIModule.dll", "UnityEngine", "GUI");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_IMGUIModule::UnityEngine::GUI::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Color UnityEngine_IMGUIModule::UnityEngine::GUI::get_color()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_color");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_color(UnityEngine_CoreModule::UnityEngine::Color value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_color", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_contentColor(UnityEngine_CoreModule::UnityEngine::Color value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_contentColor", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUI::get_changed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_changed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_changed(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_changed", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUI::get_enabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_enabled");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_enabled(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_enabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_IMGUIModule::UnityEngine::GUI::get_depth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_depth");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_depth(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_depth", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUI::get_usePageScrollbars()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_usePageScrollbars");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Material* UnityEngine_IMGUIModule::UnityEngine::GUI::get_blendMaterial()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_blendMaterial");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* UnityEngine_IMGUIModule::UnityEngine::GUI::get_blitMaterial()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_blitMaterial");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* UnityEngine_IMGUIModule::UnityEngine::GUI::get_roundedRectMaterial()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_roundedRectMaterial");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* UnityEngine_IMGUIModule::UnityEngine::GUI::get_roundedRectWithColorPerBorderMaterial()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_roundedRectWithColorPerBorderMaterial");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::GrabMouseControl(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GrabMouseControl", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUI::HasMouseControl(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasMouseControl", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_IMGUIModule::UnityEngine::GUI::ReleaseMouseControl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReleaseMouseControl");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::SetNextControlName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNextControlName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::FocusControl(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FocusControl", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::InternalRepaintEditorWindow()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalRepaintEditorWindow");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::GUI::Internal_DoWindow(int32_t id, int32_t instanceID, UnityEngine_CoreModule::UnityEngine::Rect clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* title, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::Object* skin, bool forceRectOnLayout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DoWindow", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Rect", "UnityEngine.GUI/WindowFunction", "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&instanceID;
	params[2] = (intptr_t)&clientRect;
	params[3] = (intptr_t)func;
	params[4] = (intptr_t)title;
	params[5] = (intptr_t)style;
	params[6] = (intptr_t)skin;
	params[7] = (intptr_t)&forceRectOnLayout;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::FocusWindow(int32_t windowID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FocusWindow", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&windowID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_IMGUIModule::UnityEngine::GUI::get_scrollTroughSide()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_scrollTroughSide");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_scrollTroughSide(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_scrollTroughSide", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::DateTime UnityEngine_IMGUIModule::UnityEngine::GUI::get_nextScrollStepTime()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_nextScrollStepTime");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_nextScrollStepTime(mscorlib::System::DateTime value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_nextScrollStepTime", std::vector<std::string> { "System.DateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_skin(UnityEngine_IMGUIModule::UnityEngine::GUISkin* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_skin", std::vector<std::string> { "UnityEngine.GUISkin" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_IMGUIModule::UnityEngine::GUISkin* UnityEngine_IMGUIModule::UnityEngine::GUI::get_skin()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_skin");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUISkin*)returnValue;
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DoSetSkin(UnityEngine_IMGUIModule::UnityEngine::GUISkin* newSkin)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoSetSkin", std::vector<std::string> { "UnityEngine.GUISkin" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)newSkin;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Matrix4x4 UnityEngine_IMGUIModule::UnityEngine::GUI::get_matrix()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_matrix");
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
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_matrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_matrix", std::vector<std::string> { "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::Label(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Label", std::vector<std::string> { "UnityEngine.Rect", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::Label(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Label", std::vector<std::string> { "UnityEngine.Rect", "System.String", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::Label(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Label", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTexture", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTexture", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.ScaleMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&scaleMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTexture", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.ScaleMode", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&scaleMode;
	params[3] = (intptr_t)&alphaBlend;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTexture", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.ScaleMode", "System.Boolean", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&scaleMode;
	params[3] = (intptr_t)&alphaBlend;
	params[4] = (intptr_t)&imageAspect;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color color, float borderWidth, float borderRadius)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTexture", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.ScaleMode", "System.Boolean", "System.Single", "UnityEngine.Color", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&scaleMode;
	params[3] = (intptr_t)&alphaBlend;
	params[4] = (intptr_t)&imageAspect;
	params[5] = (intptr_t)&color;
	params[6] = (intptr_t)&borderWidth;
	params[7] = (intptr_t)&borderRadius;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color color, UnityEngine_CoreModule::UnityEngine::Vector4 borderWidths, float borderRadius)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTexture", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.ScaleMode", "System.Boolean", "System.Single", "UnityEngine.Color", "UnityEngine.Vector4", "System.Single" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&scaleMode;
	params[3] = (intptr_t)&alphaBlend;
	params[4] = (intptr_t)&imageAspect;
	params[5] = (intptr_t)&color;
	params[6] = (intptr_t)&borderWidths;
	params[7] = (intptr_t)&borderRadius;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color color, UnityEngine_CoreModule::UnityEngine::Vector4 borderWidths, UnityEngine_CoreModule::UnityEngine::Vector4 borderRadiuses)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTexture", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.ScaleMode", "System.Boolean", "System.Single", "UnityEngine.Color", "UnityEngine.Vector4", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&scaleMode;
	params[3] = (intptr_t)&alphaBlend;
	params[4] = (intptr_t)&imageAspect;
	params[5] = (intptr_t)&color;
	params[6] = (intptr_t)&borderWidths;
	params[7] = (intptr_t)&borderRadiuses;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color color, UnityEngine_CoreModule::UnityEngine::Vector4 borderWidths, UnityEngine_CoreModule::UnityEngine::Vector4 borderRadiuses, bool drawSmoothCorners)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTexture", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.ScaleMode", "System.Boolean", "System.Single", "UnityEngine.Color", "UnityEngine.Vector4", "UnityEngine.Vector4", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&scaleMode;
	params[3] = (intptr_t)&alphaBlend;
	params[4] = (intptr_t)&imageAspect;
	params[5] = (intptr_t)&color;
	params[6] = (intptr_t)&borderWidths;
	params[7] = (intptr_t)&borderRadiuses;
	params[8] = (intptr_t)&drawSmoothCorners;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color leftColor, UnityEngine_CoreModule::UnityEngine::Color topColor, UnityEngine_CoreModule::UnityEngine::Color rightColor, UnityEngine_CoreModule::UnityEngine::Color bottomColor, UnityEngine_CoreModule::UnityEngine::Vector4 borderWidths, UnityEngine_CoreModule::UnityEngine::Vector4 borderRadiuses, bool drawSmoothCorners)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTexture", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.ScaleMode", "System.Boolean", "System.Single", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Color", "UnityEngine.Vector4", "UnityEngine.Vector4", "System.Boolean" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&scaleMode;
	params[3] = (intptr_t)&alphaBlend;
	params[4] = (intptr_t)&imageAspect;
	params[5] = (intptr_t)&leftColor;
	params[6] = (intptr_t)&topColor;
	params[7] = (intptr_t)&rightColor;
	params[8] = (intptr_t)&bottomColor;
	params[9] = (intptr_t)&borderWidths;
	params[10] = (intptr_t)&borderRadiuses;
	params[11] = (intptr_t)&drawSmoothCorners;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUI::CalculateScaledTextureRects(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, float imageAspect, UnityEngine_CoreModule::UnityEngine::Rect& outScreenRect, UnityEngine_CoreModule::UnityEngine::Rect& outSourceRect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateScaledTextureRects", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.ScaleMode", "System.Single", "UnityEngine.Rect&", "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&scaleMode;
	params[2] = (intptr_t)&imageAspect;
	params[3] = (intptr_t)&outScreenRect;
	params[4] = (intptr_t)&outSourceRect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTextureWithTexCoords(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_CoreModule::UnityEngine::Rect texCoords)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTextureWithTexCoords", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.Rect" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&texCoords;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DrawTextureWithTexCoords(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_CoreModule::UnityEngine::Rect texCoords, bool alphaBlend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTextureWithTexCoords", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.Rect", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)&texCoords;
	params[3] = (intptr_t)&alphaBlend;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::Box(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Box", std::vector<std::string> { "UnityEngine.Rect", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::Box(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Box", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::Box(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Box", std::vector<std::string> { "UnityEngine.Rect", "System.String", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::Box(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Box", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUI::Button(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Button", std::vector<std::string> { "UnityEngine.Rect", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::Button(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Button", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::Button(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Button", std::vector<std::string> { "UnityEngine.Rect", "System.String", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::Button(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Button", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Texture", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)image;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::Button(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Button", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::Button(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Button", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)content;
	params[3] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::DoRepeatButton(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::FocusType focusType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoRepeatButton", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.FocusType" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	params[3] = (intptr_t)&focusType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUI::TextField(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextField", std::vector<std::string> { "UnityEngine.Rect", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUI::TextField(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, int32_t maxLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextField", std::vector<std::string> { "UnityEngine.Rect", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)&maxLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUI::TextField(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextField", std::vector<std::string> { "UnityEngine.Rect", "System.String", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUI::TextField(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextField", std::vector<std::string> { "UnityEngine.Rect", "System.String", "System.Int32", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)&maxLength;
	params[3] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUI::PasswordFieldGetStrToShow(mscorlib::System::String* password, wchar_t maskChar)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PasswordFieldGetStrToShow", std::vector<std::string> { "System.String", "System.Char" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)password;
	params[1] = (intptr_t)&maskChar;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUI::TextArea(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextArea", std::vector<std::string> { "UnityEngine.Rect", "System.String", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DoTextField(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoTextField", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent", "System.Boolean", "System.Int32", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)content;
	params[3] = (intptr_t)&multiline;
	params[4] = (intptr_t)&maxLength;
	params[5] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DoTextField(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::String* secureText)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoTextField", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent", "System.Boolean", "System.Int32", "UnityEngine.GUIStyle", "System.String" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)content;
	params[3] = (intptr_t)&multiline;
	params[4] = (intptr_t)&maxLength;
	params[5] = (intptr_t)style;
	params[6] = (intptr_t)secureText;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::DoTextField(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::String* secureText, wchar_t maskChar)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoTextField", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent", "System.Boolean", "System.Int32", "UnityEngine.GUIStyle", "System.String", "System.Char" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)content;
	params[3] = (intptr_t)&multiline;
	params[4] = (intptr_t)&maxLength;
	params[5] = (intptr_t)style;
	params[6] = (intptr_t)secureText;
	params[7] = (intptr_t)&maskChar;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::HandleTextFieldEventForTouchscreen(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::String* secureText, wchar_t maskChar, UnityEngine_IMGUIModule::UnityEngine::TextEditor* editor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleTextFieldEventForTouchscreen", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent", "System.Boolean", "System.Int32", "UnityEngine.GUIStyle", "System.String", "System.Char", "UnityEngine.TextEditor" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)content;
	params[3] = (intptr_t)&multiline;
	params[4] = (intptr_t)&maxLength;
	params[5] = (intptr_t)style;
	params[6] = (intptr_t)secureText;
	params[7] = (intptr_t)&maskChar;
	params[8] = (intptr_t)editor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::HandleTextFieldEventForDesktop(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::TextEditor* editor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleTextFieldEventForDesktop", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent", "System.Boolean", "System.Int32", "UnityEngine.GUIStyle", "UnityEngine.TextEditor" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)content;
	params[3] = (intptr_t)&multiline;
	params[4] = (intptr_t)&maxLength;
	params[5] = (intptr_t)style;
	params[6] = (intptr_t)editor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUI::Toggle(UnityEngine_CoreModule::UnityEngine::Rect position, bool value, mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toggle", std::vector<std::string> { "UnityEngine.Rect", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::Toggle(UnityEngine_CoreModule::UnityEngine::Rect position, bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toggle", std::vector<std::string> { "UnityEngine.Rect", "System.Boolean", "UnityEngine.GUIContent" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)content;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::Toggle(UnityEngine_CoreModule::UnityEngine::Rect position, bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toggle", std::vector<std::string> { "UnityEngine.Rect", "System.Boolean", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)content;
	params[3] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUI::Toolbar(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, IL2CPP::Array<mscorlib::System::String*>* controlNames, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize, IL2CPP::Array<bool>* contentsEnabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toolbar", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent[]", "System.String[]", "UnityEngine.GUIStyle", "UnityEngine.GUI/ToolbarButtonSize", "System.Boolean[]" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&selected;
	params[2] = (intptr_t)contents;
	params[3] = (intptr_t)controlNames;
	params[4] = (intptr_t)style;
	params[5] = (intptr_t)&buttonSize;
	params[6] = (intptr_t)contentsEnabled;
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUI::SelectionGrid(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectionGrid", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent[]", "System.Int32", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&selected;
	params[2] = (intptr_t)contents;
	params[3] = (intptr_t)&xCount;
	params[4] = (intptr_t)style;
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
void UnityEngine_IMGUIModule::UnityEngine::GUI::FindStyles(UnityEngine_IMGUIModule::UnityEngine::GUIStyle& style, UnityEngine_IMGUIModule::UnityEngine::GUIStyle& firstStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle& midStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle& lastStyle, mscorlib::System::String* first, mscorlib::System::String* mid, mscorlib::System::String* last)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindStyles", std::vector<std::string> { "UnityEngine.GUIStyle&", "UnityEngine.GUIStyle&", "UnityEngine.GUIStyle&", "UnityEngine.GUIStyle&", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&style;
	params[1] = (intptr_t)&firstStyle;
	params[2] = (intptr_t)&midStyle;
	params[3] = (intptr_t)&lastStyle;
	params[4] = (intptr_t)first;
	params[5] = (intptr_t)mid;
	params[6] = (intptr_t)last;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_IMGUIModule::UnityEngine::GUI::CalcTotalHorizSpacing(int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* firstStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* midStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* lastStyle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalcTotalHorizSpacing", std::vector<std::string> { "System.Int32", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&xCount;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)firstStyle;
	params[3] = (intptr_t)midStyle;
	params[4] = (intptr_t)lastStyle;
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::DoControl(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, bool on, bool hover, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoControl", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "System.Boolean", "System.Boolean", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)&on;
	params[3] = (intptr_t)&hover;
	params[4] = (intptr_t)content;
	params[5] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_IMGUIModule::UnityEngine::GUI::DoLabel(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoLabel", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUI::DoToggle(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoToggle", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "System.Boolean", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)&value;
	params[3] = (intptr_t)content;
	params[4] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUI::DoButton(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoButton", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)content;
	params[3] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUI::DoButtonGrid(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, IL2CPP::Array<mscorlib::System::String*>* controlNames, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* firstStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* midStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* lastStyle, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize, IL2CPP::Array<bool>* contentsEnabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoButtonGrid", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "UnityEngine.GUIContent[]", "System.String[]", "System.Int32", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUI/ToolbarButtonSize", "System.Boolean[]" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&selected;
	params[2] = (intptr_t)contents;
	params[3] = (intptr_t)controlNames;
	params[4] = (intptr_t)&xCount;
	params[5] = (intptr_t)style;
	params[6] = (intptr_t)firstStyle;
	params[7] = (intptr_t)midStyle;
	params[8] = (intptr_t)lastStyle;
	params[9] = (intptr_t)&buttonSize;
	params[10] = (intptr_t)contentsEnabled;
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
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* UnityEngine_IMGUIModule::UnityEngine::GUI::CalcMouseRects(UnityEngine_CoreModule::UnityEngine::Rect position, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, float elemWidth, float elemHeight, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* firstStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* midStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* lastStyle, bool addBorders, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalcMouseRects", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent[]", "System.Int32", "System.Single", "System.Single", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "System.Boolean", "UnityEngine.GUI/ToolbarButtonSize" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)contents;
	params[2] = (intptr_t)&xCount;
	params[3] = (intptr_t)&elemWidth;
	params[4] = (intptr_t)&elemHeight;
	params[5] = (intptr_t)style;
	params[6] = (intptr_t)firstStyle;
	params[7] = (intptr_t)midStyle;
	params[8] = (intptr_t)lastStyle;
	params[9] = (intptr_t)&addBorders;
	params[10] = (intptr_t)&buttonSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>*)returnValue;
}
float UnityEngine_IMGUIModule::UnityEngine::GUI::HorizontalSlider(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float leftValue, float rightValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HorizontalSlider", std::vector<std::string> { "UnityEngine.Rect", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&leftValue;
	params[3] = (intptr_t)&rightValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::GUI::HorizontalSlider(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float leftValue, float rightValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HorizontalSlider", std::vector<std::string> { "UnityEngine.Rect", "System.Single", "System.Single", "System.Single", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&leftValue;
	params[3] = (intptr_t)&rightValue;
	params[4] = (intptr_t)slider;
	params[5] = (intptr_t)thumb;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::GUI::VerticalSlider(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float topValue, float bottomValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerticalSlider", std::vector<std::string> { "UnityEngine.Rect", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&topValue;
	params[3] = (intptr_t)&bottomValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::GUI::Slider(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float size, float start, float end, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb, bool horiz, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumbExtent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Slider", std::vector<std::string> { "UnityEngine.Rect", "System.Single", "System.Single", "System.Single", "System.Single", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "System.Boolean", "System.Int32", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&start;
	params[4] = (intptr_t)&end;
	params[5] = (intptr_t)slider;
	params[6] = (intptr_t)thumb;
	params[7] = (intptr_t)&horiz;
	params[8] = (intptr_t)&id;
	params[9] = (intptr_t)thumbExtent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::GUI::HorizontalScrollbar(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float size, float leftValue, float rightValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HorizontalScrollbar", std::vector<std::string> { "UnityEngine.Rect", "System.Single", "System.Single", "System.Single", "System.Single", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&leftValue;
	params[4] = (intptr_t)&rightValue;
	params[5] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_IMGUIModule::UnityEngine::GUI::ScrollerRepeatButton(int32_t scrollerID, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScrollerRepeatButton", std::vector<std::string> { "System.Int32", "UnityEngine.Rect", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&scrollerID;
	params[1] = (intptr_t)&rect;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
float UnityEngine_IMGUIModule::UnityEngine::GUI::VerticalScrollbar(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float size, float topValue, float bottomValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerticalScrollbar", std::vector<std::string> { "UnityEngine.Rect", "System.Single", "System.Single", "System.Single", "System.Single", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&topValue;
	params[4] = (intptr_t)&bottomValue;
	params[5] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::GUI::Scroller(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float size, float leftValue, float rightValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* leftButton, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* rightButton, bool horiz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Scroller", std::vector<std::string> { "UnityEngine.Rect", "System.Single", "System.Single", "System.Single", "System.Single", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "System.Boolean" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&leftValue;
	params[4] = (intptr_t)&rightValue;
	params[5] = (intptr_t)slider;
	params[6] = (intptr_t)thumb;
	params[7] = (intptr_t)leftButton;
	params[8] = (intptr_t)rightButton;
	params[9] = (intptr_t)&horiz;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::BeginGroup(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginGroup", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::BeginGroup(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_CoreModule::UnityEngine::Vector2 scrollOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginGroup", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	params[3] = (intptr_t)&scrollOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::EndGroup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndGroup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngineInternal::GenericStack* UnityEngine_IMGUIModule::UnityEngine::GUI::get_scrollViewStates()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_scrollViewStates");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngineInternal::GenericStack*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUI::BeginScrollView(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, UnityEngine_CoreModule::UnityEngine::Rect viewRect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginScrollView", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Vector2", "UnityEngine.Rect" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&scrollPosition;
	params[2] = (intptr_t)&viewRect;
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
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUI::BeginScrollView(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, UnityEngine_CoreModule::UnityEngine::Rect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* verticalScrollbar, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* background)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginScrollView", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Vector2", "UnityEngine.Rect", "System.Boolean", "System.Boolean", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&scrollPosition;
	params[2] = (intptr_t)&viewRect;
	params[3] = (intptr_t)&alwaysShowHorizontal;
	params[4] = (intptr_t)&alwaysShowVertical;
	params[5] = (intptr_t)horizontalScrollbar;
	params[6] = (intptr_t)verticalScrollbar;
	params[7] = (intptr_t)background;
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
void UnityEngine_IMGUIModule::UnityEngine::GUI::EndScrollView()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndScrollView");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::EndScrollView(bool handleScrollWheel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndScrollView", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handleScrollWheel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::GUI::Window(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Window", std::vector<std::string> { "System.Int32", "UnityEngine.Rect", "UnityEngine.GUI/WindowFunction", "System.String", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&clientRect;
	params[2] = (intptr_t)func;
	params[3] = (intptr_t)text;
	params[4] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::GUI::Window(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* title, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Window", std::vector<std::string> { "System.Int32", "UnityEngine.Rect", "UnityEngine.GUI/WindowFunction", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&clientRect;
	params[2] = (intptr_t)func;
	params[3] = (intptr_t)title;
	params[4] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::GUI::DoWindow(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* title, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUISkin* skin, bool forceRectOnLayout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoWindow", std::vector<std::string> { "System.Int32", "UnityEngine.Rect", "UnityEngine.GUI/WindowFunction", "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUISkin", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&clientRect;
	params[2] = (intptr_t)func;
	params[3] = (intptr_t)title;
	params[4] = (intptr_t)style;
	params[5] = (intptr_t)skin;
	params[6] = (intptr_t)&forceRectOnLayout;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::CallWindowDelegate(UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, int32_t id, int32_t instanceID, UnityEngine_IMGUIModule::UnityEngine::GUISkin* _skin, int32_t forceRect, float width, float height, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallWindowDelegate", std::vector<std::string> { "UnityEngine.GUI/WindowFunction", "System.Int32", "System.Int32", "UnityEngine.GUISkin", "System.Int32", "System.Single", "System.Single", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)func;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)&instanceID;
	params[3] = (intptr_t)_skin;
	params[4] = (intptr_t)&forceRect;
	params[5] = (intptr_t)&width;
	params[6] = (intptr_t)&height;
	params[7] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::get_color_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_color_Injected", std::vector<std::string> { "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_color_Injected(UnityEngine_CoreModule::UnityEngine::Color& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_color_Injected", std::vector<std::string> { "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::set_contentColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_contentColor_Injected", std::vector<std::string> { "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUI::Internal_DoWindow_Injected(int32_t id, int32_t instanceID, UnityEngine_CoreModule::UnityEngine::Rect& clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* title, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::Object* skin, bool forceRectOnLayout, UnityEngine_CoreModule::UnityEngine::Rect& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DoWindow_Injected", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Rect&", "UnityEngine.GUI/WindowFunction", "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "System.Object", "System.Boolean", "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&instanceID;
	params[2] = (intptr_t)&clientRect;
	params[3] = (intptr_t)func;
	params[4] = (intptr_t)title;
	params[5] = (intptr_t)style;
	params[6] = (intptr_t)skin;
	params[7] = (intptr_t)&forceRectOnLayout;
	params[8] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
