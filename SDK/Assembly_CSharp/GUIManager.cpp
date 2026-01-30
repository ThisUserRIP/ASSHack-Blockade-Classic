#include "GUIManager.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GUIManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "GUIManager");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GUIManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Assembly_CSharp::GUIManager::XRES(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XRES", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
float Assembly_CSharp::GUIManager::YRES(float y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YRES", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&y;
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
float Assembly_CSharp::GUIManager::ASPECTRATIO()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ASPECTRATIO");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::GUIManager::PreInit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreInit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::GUIManager::Init(bool _only_localize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_only_localize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::GUIManager::DrawLoading()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawLoading");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::GUIManager::DrawButton(UnityEngine_CoreModule::UnityEngine::Rect r, UnityEngine_CoreModule::UnityEngine::Vector2 mpos, UnityEngine_CoreModule::UnityEngine::Color c, mscorlib::System::String* label)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawButton", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Vector2", "UnityEngine.Color", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&r;
	params[1] = (intptr_t)&mpos;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)label;
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
mscorlib::System::String* Assembly_CSharp::GUIManager::DrawEdit(UnityEngine_CoreModule::UnityEngine::Rect r, UnityEngine_CoreModule::UnityEngine::Vector2 mpos, UnityEngine_CoreModule::UnityEngine::Color c, mscorlib::System::String* label, int32_t limit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawEdit", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Vector2", "UnityEngine.Color", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&r;
	params[1] = (intptr_t)&mpos;
	params[2] = (intptr_t)&c;
	params[3] = (intptr_t)label;
	params[4] = (intptr_t)&limit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
float Assembly_CSharp::GUIManager::DrawColorText(float x, float y, mscorlib::System::String* text, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor align, int32_t _width)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawColorText", std::vector<std::string> { "System.Single", "System.Single", "System.String", "UnityEngine.TextAnchor", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)text;
	params[3] = (intptr_t)&align;
	params[4] = (intptr_t)&_width;
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
void Assembly_CSharp::GUIManager::DrawText(UnityEngine_CoreModule::UnityEngine::Rect r, mscorlib::System::String* text, int32_t size, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor align, int32_t color, bool _ww)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawText", std::vector<std::string> { "UnityEngine.Rect", "System.String", "System.Int32", "UnityEngine.TextAnchor", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&r;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&align;
	params[4] = (intptr_t)&color;
	params[5] = (intptr_t)&_ww;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::GUIManager::DrawText2(UnityEngine_CoreModule::UnityEngine::Rect r, mscorlib::System::String* text, int32_t size, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor align, UnityEngine_CoreModule::UnityEngine::Color _c, bool _ww)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawText2", std::vector<std::string> { "UnityEngine.Rect", "System.String", "System.Int32", "UnityEngine.TextAnchor", "UnityEngine.Color", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&r;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&align;
	params[4] = (intptr_t)&_c;
	params[5] = (intptr_t)&_ww;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::GUIManager::DrawTextVsStyle(UnityEngine_CoreModule::UnityEngine::Rect r, mscorlib::System::String* text, int32_t _size, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor _align, UnityEngine_CoreModule::UnityEngine::Color _color, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* _gs, bool _ww, bool _shadow)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawTextVsStyle", std::vector<std::string> { "UnityEngine.Rect", "System.String", "System.Int32", "UnityEngine.TextAnchor", "UnityEngine.Color", "UnityEngine.GUIStyle", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&r;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)&_size;
	params[3] = (intptr_t)&_align;
	params[4] = (intptr_t)&_color;
	params[5] = (intptr_t)_gs;
	params[6] = (intptr_t)&_ww;
	params[7] = (intptr_t)&_shadow;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::GUIManager::DrawButton2(UnityEngine_CoreModule::UnityEngine::Vector2 pos, UnityEngine_CoreModule::UnityEngine::Vector2 mpos, mscorlib::System::String* label, int32_t type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawButton2", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&pos;
	params[1] = (intptr_t)&mpos;
	params[2] = (intptr_t)label;
	params[3] = (intptr_t)&type;
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
void Assembly_CSharp::GUIManager::HSlider()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HSlider");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::GUIManager::Toggle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toggle");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 Assembly_CSharp::GUIManager::BeginScrollView(UnityEngine_CoreModule::UnityEngine::Rect viewzone, UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector, UnityEngine_CoreModule::UnityEngine::Rect scrollzone, bool isHorisontal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginScrollView", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.Vector2", "UnityEngine.Rect", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&viewzone;
	params[1] = (intptr_t)&scrollViewVector;
	params[2] = (intptr_t)&scrollzone;
	params[3] = (intptr_t)&isHorisontal;
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
void Assembly_CSharp::GUIManager::EndScrollView(bool isHorisontal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndScrollView", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isHorisontal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::GUIManager::DrawBar(UnityEngine_CoreModule::UnityEngine::Rect r, bool isHorisontal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawBar", std::vector<std::string> { "UnityEngine.Rect", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&r;
	params[1] = (intptr_t)&isHorisontal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::GUIManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::GUIManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
