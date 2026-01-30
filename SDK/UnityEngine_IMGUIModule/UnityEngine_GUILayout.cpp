#include "UnityEngine_GUILayout.h"

IL2CPP::Il2CppClass* UnityEngine_IMGUIModule::UnityEngine::GUILayout::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.IMGUIModule.dll", "UnityEngine", "GUILayout");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_IMGUIModule::UnityEngine::GUILayout::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::Label(mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Label", std::vector<std::string> { "System.String", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::Label(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Label", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::Label(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Label", std::vector<std::string> { "System.String", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::DoLabel(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoLabel", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::Box(UnityEngine_CoreModule::UnityEngine::Texture* image, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Box", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)image;
	params[1] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::Box(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Box", std::vector<std::string> { "System.String", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::Box(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Box", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::DoBox(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoBox", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_IMGUIModule::UnityEngine::GUILayout::Button(mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Button", std::vector<std::string> { "System.String", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)options;
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
bool UnityEngine_IMGUIModule::UnityEngine::GUILayout::Button(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Button", std::vector<std::string> { "System.String", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
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
bool UnityEngine_IMGUIModule::UnityEngine::GUILayout::DoButton(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoButton", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
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
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUILayout::TextField(mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextField", std::vector<std::string> { "System.String", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUILayout::TextField(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextField", std::vector<std::string> { "System.String", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUILayout::TextArea(mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextArea", std::vector<std::string> { "System.String", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUILayout::TextArea(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextArea", std::vector<std::string> { "System.String", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_IMGUIModule::UnityEngine::GUILayout::DoTextField(mscorlib::System::String* text, int32_t maxLength, bool multiline, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoTextField", std::vector<std::string> { "System.String", "System.Int32", "System.Boolean", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&maxLength;
	params[2] = (intptr_t)&multiline;
	params[3] = (intptr_t)style;
	params[4] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool UnityEngine_IMGUIModule::UnityEngine::GUILayout::Toggle(bool value, mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toggle", std::vector<std::string> { "System.Boolean", "System.String", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)options;
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
bool UnityEngine_IMGUIModule::UnityEngine::GUILayout::Toggle(bool value, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toggle", std::vector<std::string> { "System.Boolean", "System.String", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)style;
	params[3] = (intptr_t)options;
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
bool UnityEngine_IMGUIModule::UnityEngine::GUILayout::Toggle(bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toggle", std::vector<std::string> { "System.Boolean", "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	params[3] = (intptr_t)options;
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
bool UnityEngine_IMGUIModule::UnityEngine::GUILayout::DoToggle(bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoToggle", std::vector<std::string> { "System.Boolean", "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	params[3] = (intptr_t)options;
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUILayout::Toolbar(int32_t selected, IL2CPP::Array<mscorlib::System::String*>* texts, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toolbar", std::vector<std::string> { "System.Int32", "System.String[]", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&selected;
	params[1] = (intptr_t)texts;
	params[2] = (intptr_t)style;
	params[3] = (intptr_t)options;
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUILayout::Toolbar(int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toolbar", std::vector<std::string> { "System.Int32", "UnityEngine.GUIContent[]", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&selected;
	params[1] = (intptr_t)contents;
	params[2] = (intptr_t)style;
	params[3] = (intptr_t)options;
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUILayout::Toolbar(int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toolbar", std::vector<std::string> { "System.Int32", "UnityEngine.GUIContent[]", "UnityEngine.GUIStyle", "UnityEngine.GUI/ToolbarButtonSize", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&selected;
	params[1] = (intptr_t)contents;
	params[2] = (intptr_t)style;
	params[3] = (intptr_t)&buttonSize;
	params[4] = (intptr_t)options;
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUILayout::Toolbar(int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, IL2CPP::Array<bool>* enabled, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Toolbar", std::vector<std::string> { "System.Int32", "UnityEngine.GUIContent[]", "System.Boolean[]", "UnityEngine.GUIStyle", "UnityEngine.GUI/ToolbarButtonSize", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&selected;
	params[1] = (intptr_t)contents;
	params[2] = (intptr_t)enabled;
	params[3] = (intptr_t)style;
	params[4] = (intptr_t)&buttonSize;
	params[5] = (intptr_t)options;
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUILayout::SelectionGrid(int32_t selected, IL2CPP::Array<mscorlib::System::String*>* texts, int32_t xCount, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectionGrid", std::vector<std::string> { "System.Int32", "System.String[]", "System.Int32", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&selected;
	params[1] = (intptr_t)texts;
	params[2] = (intptr_t)&xCount;
	params[3] = (intptr_t)options;
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUILayout::SelectionGrid(int32_t selected, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* images, int32_t xCount, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectionGrid", std::vector<std::string> { "System.Int32", "UnityEngine.Texture[]", "System.Int32", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&selected;
	params[1] = (intptr_t)images;
	params[2] = (intptr_t)&xCount;
	params[3] = (intptr_t)options;
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
int32_t UnityEngine_IMGUIModule::UnityEngine::GUILayout::SelectionGrid(int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectionGrid", std::vector<std::string> { "System.Int32", "UnityEngine.GUIContent[]", "System.Int32", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&selected;
	params[1] = (intptr_t)contents;
	params[2] = (intptr_t)&xCount;
	params[3] = (intptr_t)style;
	params[4] = (intptr_t)options;
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
float UnityEngine_IMGUIModule::UnityEngine::GUILayout::HorizontalSlider(float value, float leftValue, float rightValue, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HorizontalSlider", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&leftValue;
	params[2] = (intptr_t)&rightValue;
	params[3] = (intptr_t)options;
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
float UnityEngine_IMGUIModule::UnityEngine::GUILayout::DoHorizontalSlider(float value, float leftValue, float rightValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoHorizontalSlider", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&leftValue;
	params[2] = (intptr_t)&rightValue;
	params[3] = (intptr_t)slider;
	params[4] = (intptr_t)thumb;
	params[5] = (intptr_t)options;
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
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::Space(float pixels)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Space", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pixels;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::FlexibleSpace()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlexibleSpace");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginHorizontal(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginHorizontal", std::vector<std::string> { "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginHorizontal(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginHorizontal", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::EndHorizontal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndHorizontal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginVertical(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginVertical", std::vector<std::string> { "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginVertical(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginVertical", std::vector<std::string> { "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)style;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::EndVertical()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndVertical");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginArea(UnityEngine_CoreModule::UnityEngine::Rect screenRect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginArea", std::vector<std::string> { "UnityEngine.Rect" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&screenRect;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginArea(UnityEngine_CoreModule::UnityEngine::Rect screenRect, mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginArea", std::vector<std::string> { "UnityEngine.Rect", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginArea(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginArea", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginArea(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginArea", std::vector<std::string> { "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&screenRect;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::EndArea()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndArea");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginScrollView(UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginScrollView", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&scrollPosition;
	params[1] = (intptr_t)options;
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
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginScrollView(UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginScrollView", std::vector<std::string> { "UnityEngine.Vector2", "System.Boolean", "System.Boolean", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&scrollPosition;
	params[1] = (intptr_t)&alwaysShowHorizontal;
	params[2] = (intptr_t)&alwaysShowVertical;
	params[3] = (intptr_t)options;
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
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_IMGUIModule::UnityEngine::GUILayout::BeginScrollView(UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* verticalScrollbar, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* background, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginScrollView", std::vector<std::string> { "UnityEngine.Vector2", "System.Boolean", "System.Boolean", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&scrollPosition;
	params[1] = (intptr_t)&alwaysShowHorizontal;
	params[2] = (intptr_t)&alwaysShowVertical;
	params[3] = (intptr_t)horizontalScrollbar;
	params[4] = (intptr_t)verticalScrollbar;
	params[5] = (intptr_t)background;
	params[6] = (intptr_t)options;
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
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::EndScrollView()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndScrollView");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout::EndScrollView(bool handleScrollWheel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndScrollView", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handleScrollWheel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::GUILayout::Window(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Window", std::vector<std::string> { "System.Int32", "UnityEngine.Rect", "UnityEngine.GUI/WindowFunction", "System.String", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&screenRect;
	params[2] = (intptr_t)func;
	params[3] = (intptr_t)text;
	params[4] = (intptr_t)options;
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
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::GUILayout::Window(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Window", std::vector<std::string> { "System.Int32", "UnityEngine.Rect", "UnityEngine.GUI/WindowFunction", "System.String", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&screenRect;
	params[2] = (intptr_t)func;
	params[3] = (intptr_t)text;
	params[4] = (intptr_t)style;
	params[5] = (intptr_t)options;
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
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::GUILayout::DoWindow(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoWindow", std::vector<std::string> { "System.Int32", "UnityEngine.Rect", "UnityEngine.GUI/WindowFunction", "UnityEngine.GUIContent", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&screenRect;
	params[2] = (intptr_t)func;
	params[3] = (intptr_t)content;
	params[4] = (intptr_t)style;
	params[5] = (intptr_t)options;
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
UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* UnityEngine_IMGUIModule::UnityEngine::GUILayout::Width(float width)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Width", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&width;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* UnityEngine_IMGUIModule::UnityEngine::GUILayout::MinWidth(float minWidth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MinWidth", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&minWidth;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* UnityEngine_IMGUIModule::UnityEngine::GUILayout::MaxWidth(float maxWidth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MaxWidth", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&maxWidth;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* UnityEngine_IMGUIModule::UnityEngine::GUILayout::Height(float height)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Height", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&height;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* UnityEngine_IMGUIModule::UnityEngine::GUILayout::MinHeight(float minHeight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MinHeight", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&minHeight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* UnityEngine_IMGUIModule::UnityEngine::GUILayout::MaxHeight(float maxHeight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MaxHeight", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&maxHeight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* UnityEngine_IMGUIModule::UnityEngine::GUILayout::ExpandWidth(bool expand)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpandWidth", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&expand;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*)returnValue;
}
UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* UnityEngine_IMGUIModule::UnityEngine::GUILayout::ExpandHeight(bool expand)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpandHeight", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&expand;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*)returnValue;
}
