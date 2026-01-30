#include "UnityEngine_GUIStyle.h"

IL2CPP::Il2CppClass* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.IMGUIModule.dll", "UnityEngine", "GUIStyle");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_rawName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rawName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_rawName(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_rawName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TextRenderingModule::UnityEngine::Font* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_font()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_font");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_TextRenderingModule::UnityEngine::Font*)returnValue;
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_font(UnityEngine_TextRenderingModule::UnityEngine::Font* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_font", std::vector<std::string> { "UnityEngine.Font" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_IMGUIModule::UnityEngine::ImagePosition UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_imagePosition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_imagePosition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_IMGUIModule::UnityEngine::ImagePosition ret;
		std::memset(&ret, 0, sizeof(UnityEngine_IMGUIModule::UnityEngine::ImagePosition));
		return ret;
	}
	return static_cast<UnityEngine_IMGUIModule::UnityEngine::ImagePosition>(*(UnityEngine_IMGUIModule::UnityEngine::ImagePosition*)il2cpp_object_unbox(returnValue));
}
UnityEngine_TextRenderingModule::UnityEngine::TextAnchor UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_alignment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_alignment");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextRenderingModule::UnityEngine::TextAnchor));
		return ret;
	}
	return static_cast<UnityEngine_TextRenderingModule::UnityEngine::TextAnchor>(*(UnityEngine_TextRenderingModule::UnityEngine::TextAnchor*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_alignment(UnityEngine_TextRenderingModule::UnityEngine::TextAnchor value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_alignment", std::vector<std::string> { "UnityEngine.TextAnchor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_wordWrap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_wordWrap");
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
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_wordWrap(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_wordWrap", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_contentOffset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_contentOffset");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_contentOffset(UnityEngine_CoreModule::UnityEngine::Vector2 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_contentOffset", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_fixedWidth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fixedWidth");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_fixedHeight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fixedHeight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_fixedHeight(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_fixedHeight", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_stretchWidth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_stretchWidth");
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
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_stretchWidth(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_stretchWidth", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_stretchHeight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_stretchHeight");
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
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_stretchHeight(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_stretchHeight", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_fontSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fontSize");
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
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_fontSize(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_fontSize", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_TextRenderingModule::UnityEngine::FontStyle UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_fontStyle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fontStyle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextRenderingModule::UnityEngine::FontStyle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextRenderingModule::UnityEngine::FontStyle));
		return ret;
	}
	return static_cast<UnityEngine_TextRenderingModule::UnityEngine::FontStyle>(*(UnityEngine_TextRenderingModule::UnityEngine::FontStyle*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_fontStyle(UnityEngine_TextRenderingModule::UnityEngine::FontStyle value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_fontStyle", std::vector<std::string> { "UnityEngine.FontStyle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_richText()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_richText");
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
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_richText(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_richText", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_Internal_clipOffset(UnityEngine_CoreModule::UnityEngine::Vector2 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Internal_clipOffset", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_Create(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Create", std::vector<std::string> { "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)self;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_Copy(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* self, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Copy", std::vector<std::string> { "UnityEngine.GUIStyle", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)self;
	params[1] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_Destroy(intptr_t self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Destroy", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&self;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_IMGUIModule::UnityEngine::GUIStyle::GetStyleStatePtr(int32_t idx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStyleStatePtr", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&idx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_IMGUIModule::UnityEngine::GUIStyle::GetRectOffsetPtr(int32_t idx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRectOffsetPtr", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&idx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::AssignRectOffset(int32_t idx, intptr_t srcRectOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AssignRectOffset", std::vector<std::string> { "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&idx;
	params[1] = (intptr_t)&srcRectOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_GetLineHeight(intptr_t target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetLineHeight", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&target;
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
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_Draw(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Draw", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&isHover;
	params[3] = (intptr_t)&isActive;
	params[4] = (intptr_t)&on;
	params[5] = (intptr_t)&hasKeyboardFocus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_Draw2(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, bool on)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Draw2", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&controlID;
	params[3] = (intptr_t)&on;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_DrawCursor(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t pos, UnityEngine_CoreModule::UnityEngine::Color cursorColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawCursor", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&pos;
	params[3] = (intptr_t)&cursorColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_DrawWithTextSelection(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int32_t cursorFirst, int32_t cursorLast, UnityEngine_CoreModule::UnityEngine::Color cursorColor, UnityEngine_CoreModule::UnityEngine::Color selectionColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawWithTextSelection", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32", "System.Int32", "UnityEngine.Color", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&isHover;
	params[3] = (intptr_t)&isActive;
	params[4] = (intptr_t)&on;
	params[5] = (intptr_t)&hasKeyboardFocus;
	params[6] = (intptr_t)&drawSelectionAsComposition;
	params[7] = (intptr_t)&cursorFirst;
	params[8] = (intptr_t)&cursorLast;
	params[9] = (intptr_t)&cursorColor;
	params[10] = (intptr_t)&selectionColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_GetCursorPixelPosition(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t cursorStringIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetCursorPixelPosition", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&cursorStringIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_GetCursorStringIndex(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2 cursorPixelPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetCursorStringIndex", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&cursorPixelPosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_GetSelectedRenderedText(UnityEngine_CoreModule::UnityEngine::Rect localPosition, UnityEngine_IMGUIModule::UnityEngine::GUIContent* mContent, int32_t selectIndex, int32_t cursorIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetSelectedRenderedText", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&localPosition;
	params[1] = (intptr_t)mContent;
	params[2] = (intptr_t)&selectIndex;
	params[3] = (intptr_t)&cursorIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_CalcSize(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CalcSize", std::vector<std::string> { "UnityEngine.GUIContent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)content;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_CalcSizeWithConstraints(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2 maxSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CalcSizeWithConstraints", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)&maxSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
float UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_CalcHeight(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, float width)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CalcHeight", std::vector<std::string> { "UnityEngine.GUIContent", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)&width;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_CalcMinMaxWidth(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CalcMinMaxWidth", std::vector<std::string> { "UnityEngine.GUIContent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)content;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::SetMouseTooltip(mscorlib::System::String* tooltip, UnityEngine_CoreModule::UnityEngine::Rect screenRect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMouseTooltip", std::vector<std::string> { "System.String", "UnityEngine.Rect" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tooltip;
	params[1] = (intptr_t)&screenRect;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_GetCursorFlashOffset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetCursorFlashOffset");
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
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::SetDefaultFont(UnityEngine_TextRenderingModule::UnityEngine::Font* font)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDefaultFont", std::vector<std::string> { "UnityEngine.Font" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)font;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::_ctor(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_name(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_name", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_normal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_normal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUIStyleState*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_hover()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hover");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUIStyleState*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_active()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_active");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUIStyleState*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_onNormal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_onNormal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUIStyleState*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_onHover()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_onHover");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUIStyleState*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_onActive()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_onActive");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUIStyleState*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::RectOffset* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_margin()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_margin");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::RectOffset*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::RectOffset* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_padding()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_padding");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::RectOffset*)returnValue;
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_padding(UnityEngine_CoreModule::UnityEngine::RectOffset* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_padding", std::vector<std::string> { "UnityEngine.RectOffset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_lineHeight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lineHeight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Draw(UnityEngine_CoreModule::UnityEngine::Rect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw", std::vector<std::string> { "UnityEngine.Rect", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&isHover;
	params[2] = (intptr_t)&isActive;
	params[3] = (intptr_t)&on;
	params[4] = (intptr_t)&hasKeyboardFocus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&isHover;
	params[3] = (intptr_t)&isActive;
	params[4] = (intptr_t)&on;
	params[5] = (intptr_t)&hasKeyboardFocus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&controlID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, bool on)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&controlID;
	params[3] = (intptr_t)&on;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, bool on, bool hover)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&controlID;
	params[3] = (intptr_t)&on;
	params[4] = (intptr_t)&hover;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&controlId;
	params[3] = (intptr_t)&isHover;
	params[4] = (intptr_t)&isActive;
	params[5] = (intptr_t)&on;
	params[6] = (intptr_t)&hasKeyboardFocus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::DrawCursor(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, int32_t character)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawCursor", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&controlID;
	params[3] = (intptr_t)&character;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::DrawWithTextSelection(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isActive, bool hasKeyboardFocus, int32_t firstSelectedCharacter, int32_t lastSelectedCharacter, bool drawSelectionAsComposition, UnityEngine_CoreModule::UnityEngine::Color selectionColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawWithTextSelection", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Boolean", "System.Boolean", "System.Int32", "System.Int32", "System.Boolean", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&isActive;
	params[3] = (intptr_t)&hasKeyboardFocus;
	params[4] = (intptr_t)&firstSelectedCharacter;
	params[5] = (intptr_t)&lastSelectedCharacter;
	params[6] = (intptr_t)&drawSelectionAsComposition;
	params[7] = (intptr_t)&selectionColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::DrawWithTextSelection(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, int32_t firstSelectedCharacter, int32_t lastSelectedCharacter, bool drawSelectionAsComposition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawWithTextSelection", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&controlID;
	params[3] = (intptr_t)&firstSelectedCharacter;
	params[4] = (intptr_t)&lastSelectedCharacter;
	params[5] = (intptr_t)&drawSelectionAsComposition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::DrawWithTextSelection(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, int32_t firstSelectedCharacter, int32_t lastSelectedCharacter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawWithTextSelection", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&controlID;
	params[3] = (intptr_t)&firstSelectedCharacter;
	params[4] = (intptr_t)&lastSelectedCharacter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_IMGUIModule::UnityEngine::GUIStyle* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::op_Implicit(mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUIStyle*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUIStyle* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_none()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_none");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUIStyle*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIStyle::GetCursorPixelPosition(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t cursorStringIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCursorPixelPosition", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&cursorStringIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUIStyle::GetCursorStringIndex(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2 cursorPixelPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCursorStringIndex", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&cursorPixelPosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIStyle::CalcSize(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalcSize", std::vector<std::string> { "UnityEngine.GUIContent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)content;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUIStyle::CalcSizeWithConstraints(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2 constraints)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalcSizeWithConstraints", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)&constraints;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
float UnityEngine_IMGUIModule::UnityEngine::GUIStyle::CalcHeight(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, float width)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalcHeight", std::vector<std::string> { "UnityEngine.GUIContent", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)&width;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_isHeightDependantOnWidth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isHeightDependantOnWidth");
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
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::CalcMinMaxWidth(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, float& minWidth, float& maxWidth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalcMinMaxWidth", std::vector<std::string> { "UnityEngine.GUIContent", "System.Single&", "System.Single&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)&minWidth;
	params[2] = (intptr_t)&maxWidth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::get_contentOffset_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_contentOffset_Injected", std::vector<std::string> { "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_contentOffset_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_contentOffset_Injected", std::vector<std::string> { "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::set_Internal_clipOffset_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Internal_clipOffset_Injected", std::vector<std::string> { "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_Draw_Injected(UnityEngine_CoreModule::UnityEngine::Rect& screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Draw_Injected", std::vector<std::string> { "UnityEngine.Rect&", "UnityEngine.GUIContent", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&isHover;
	params[3] = (intptr_t)&isActive;
	params[4] = (intptr_t)&on;
	params[5] = (intptr_t)&hasKeyboardFocus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_Draw2_Injected(UnityEngine_CoreModule::UnityEngine::Rect& position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, bool on)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Draw2_Injected", std::vector<std::string> { "UnityEngine.Rect&", "UnityEngine.GUIContent", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&controlID;
	params[3] = (intptr_t)&on;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_DrawCursor_Injected(UnityEngine_CoreModule::UnityEngine::Rect& position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t pos, UnityEngine_CoreModule::UnityEngine::Color& cursorColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawCursor_Injected", std::vector<std::string> { "UnityEngine.Rect&", "UnityEngine.GUIContent", "System.Int32", "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&pos;
	params[3] = (intptr_t)&cursorColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_DrawWithTextSelection_Injected(UnityEngine_CoreModule::UnityEngine::Rect& screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int32_t cursorFirst, int32_t cursorLast, UnityEngine_CoreModule::UnityEngine::Color& cursorColor, UnityEngine_CoreModule::UnityEngine::Color& selectionColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawWithTextSelection_Injected", std::vector<std::string> { "UnityEngine.Rect&", "UnityEngine.GUIContent", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32", "System.Int32", "UnityEngine.Color&", "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&isHover;
	params[3] = (intptr_t)&isActive;
	params[4] = (intptr_t)&on;
	params[5] = (intptr_t)&hasKeyboardFocus;
	params[6] = (intptr_t)&drawSelectionAsComposition;
	params[7] = (intptr_t)&cursorFirst;
	params[8] = (intptr_t)&cursorLast;
	params[9] = (intptr_t)&cursorColor;
	params[10] = (intptr_t)&selectionColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine_CoreModule::UnityEngine::Rect& position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t cursorStringIndex, UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetCursorPixelPosition_Injected", std::vector<std::string> { "UnityEngine.Rect&", "UnityEngine.GUIContent", "System.Int32", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&cursorStringIndex;
	params[3] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine_CoreModule::UnityEngine::Rect& position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2& cursorPixelPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetCursorStringIndex_Injected", std::vector<std::string> { "UnityEngine.Rect&", "UnityEngine.GUIContent", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&cursorPixelPosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine_CoreModule::UnityEngine::Rect& localPosition, UnityEngine_IMGUIModule::UnityEngine::GUIContent* mContent, int32_t selectIndex, int32_t cursorIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetSelectedRenderedText_Injected", std::vector<std::string> { "UnityEngine.Rect&", "UnityEngine.GUIContent", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&localPosition;
	params[1] = (intptr_t)mContent;
	params[2] = (intptr_t)&selectIndex;
	params[3] = (intptr_t)&cursorIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_CalcSize_Injected(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CalcSize_Injected", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_CalcSizeWithConstraints_Injected(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2& maxSize, UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CalcSizeWithConstraints_Injected", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.Vector2&", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)&maxSize;
	params[2] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::Internal_CalcMinMaxWidth_Injected(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CalcMinMaxWidth_Injected", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUIStyle::SetMouseTooltip_Injected(mscorlib::System::String* tooltip, UnityEngine_CoreModule::UnityEngine::Rect& screenRect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMouseTooltip_Injected", std::vector<std::string> { "System.String", "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tooltip;
	params[1] = (intptr_t)&screenRect;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
