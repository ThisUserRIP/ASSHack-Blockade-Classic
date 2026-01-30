#include "UnityEngine_TextGenerator.h"

IL2CPP::Il2CppClass* UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.TextRenderingModule.dll", "UnityEngine", "TextGenerator");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::_ctor(int32_t initialCapacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&initialCapacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::System_IDisposable_Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IDisposable.Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::get_characterCountVisible()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_characterCountVisible");
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
UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::ValidatedSettings(UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidatedSettings", std::vector<std::string> { "UnityEngine.TextGenerationSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&settings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings));
		return ret;
	}
	return static_cast<UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings>(*(UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::Invalidate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invalidate");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetCharacters(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UICharInfo>* characters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCharacters", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UICharInfo>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)characters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetLines(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UILineInfo>* lines)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLines", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UILineInfo>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)lines;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetVertices(mscorlib::System::Collections::Generic::List_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* vertices)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVertices", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.UIVertex>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)vertices;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetPreferredWidth(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPreferredWidth", std::vector<std::string> { "System.String", "UnityEngine.TextGenerationSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&settings;
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
float UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetPreferredHeight(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPreferredHeight", std::vector<std::string> { "System.String", "UnityEngine.TextGenerationSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&settings;
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
bool UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::PopulateWithErrors(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings, UnityEngine_CoreModule::UnityEngine::GameObject* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateWithErrors", std::vector<std::string> { "System.String", "UnityEngine.TextGenerationSettings", "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&settings;
	params[2] = (intptr_t)context;
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
bool UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::Populate(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Populate", std::vector<std::string> { "System.String", "UnityEngine.TextGenerationSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&settings;
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
UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::PopulateWithError(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateWithError", std::vector<std::string> { "System.String", "UnityEngine.TextGenerationSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&settings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError));
		return ret;
	}
	return static_cast<UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError>(*(UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError*)il2cpp_object_unbox(returnValue));
}
UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::PopulateAlways(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopulateAlways", std::vector<std::string> { "System.String", "UnityEngine.TextGenerationSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&settings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError));
		return ret;
	}
	return static_cast<UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError>(*(UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::IList_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::get_verts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_verts");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<UnityEngine_TextRenderingModule::UnityEngine::UICharInfo>* UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::get_characters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_characters");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<UnityEngine_TextRenderingModule::UnityEngine::UICharInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<UnityEngine_TextRenderingModule::UnityEngine::UILineInfo>* UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::get_lines()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lines");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<UnityEngine_TextRenderingModule::UnityEngine::UILineInfo>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::get_rectExtents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rectExtents");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::get_characterCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_characterCount");
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
int32_t UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::get_lineCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lineCount");
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
intptr_t UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::Internal_Create()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Create");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::Internal_Destroy(intptr_t ptr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Destroy", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ptr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::Populate_Internal(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::Font* font, UnityEngine_CoreModule::UnityEngine::Color color, int32_t fontSize, float scaleFactor, float lineSpacing, UnityEngine_TextRenderingModule::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uint32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Populate_Internal", std::vector<std::string> { "System.String", "UnityEngine.Font", "UnityEngine.Color", "System.Int32", "System.Single", "System.Single", "UnityEngine.FontStyle", "System.Boolean", "System.Boolean", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "UnityEngine.TextAnchor", "System.Single", "System.Single", "System.Single", "System.Single", "System.Boolean", "System.Boolean", "System.UInt32&" });
	intptr_t* params = new intptr_t[22];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)font;
	params[2] = (intptr_t)&color;
	params[3] = (intptr_t)&fontSize;
	params[4] = (intptr_t)&scaleFactor;
	params[5] = (intptr_t)&lineSpacing;
	params[6] = (intptr_t)&style;
	params[7] = (intptr_t)&richText;
	params[8] = (intptr_t)&resizeTextForBestFit;
	params[9] = (intptr_t)&resizeTextMinSize;
	params[10] = (intptr_t)&resizeTextMaxSize;
	params[11] = (intptr_t)&verticalOverFlow;
	params[12] = (intptr_t)&horizontalOverflow;
	params[13] = (intptr_t)&updateBounds;
	params[14] = (intptr_t)&anchor;
	params[15] = (intptr_t)&extentsX;
	params[16] = (intptr_t)&extentsY;
	params[17] = (intptr_t)&pivotX;
	params[18] = (intptr_t)&pivotY;
	params[19] = (intptr_t)&generateOutOfBounds;
	params[20] = (intptr_t)&alignByGeometry;
	params[21] = (intptr_t)&error;
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
bool UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::Populate_Internal(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::Font* font, UnityEngine_CoreModule::UnityEngine::Color color, int32_t fontSize, float scaleFactor, float lineSpacing, UnityEngine_TextRenderingModule::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, UnityEngine_TextRenderingModule::UnityEngine::VerticalWrapMode verticalOverFlow, UnityEngine_TextRenderingModule::UnityEngine::HorizontalWrapMode horizontalOverflow, bool updateBounds, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor anchor, UnityEngine_CoreModule::UnityEngine::Vector2 extents, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, bool generateOutOfBounds, bool alignByGeometry, UnityEngine_TextRenderingModule::UnityEngine::TextGenerationError& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Populate_Internal", std::vector<std::string> { "System.String", "UnityEngine.Font", "UnityEngine.Color", "System.Int32", "System.Single", "System.Single", "UnityEngine.FontStyle", "System.Boolean", "System.Boolean", "System.Int32", "System.Int32", "UnityEngine.VerticalWrapMode", "UnityEngine.HorizontalWrapMode", "System.Boolean", "UnityEngine.TextAnchor", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Boolean", "System.Boolean", "UnityEngine.TextGenerationError&" });
	intptr_t* params = new intptr_t[20];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)font;
	params[2] = (intptr_t)&color;
	params[3] = (intptr_t)&fontSize;
	params[4] = (intptr_t)&scaleFactor;
	params[5] = (intptr_t)&lineSpacing;
	params[6] = (intptr_t)&style;
	params[7] = (intptr_t)&richText;
	params[8] = (intptr_t)&resizeTextForBestFit;
	params[9] = (intptr_t)&resizeTextMinSize;
	params[10] = (intptr_t)&resizeTextMaxSize;
	params[11] = (intptr_t)&verticalOverFlow;
	params[12] = (intptr_t)&horizontalOverflow;
	params[13] = (intptr_t)&updateBounds;
	params[14] = (intptr_t)&anchor;
	params[15] = (intptr_t)&extents;
	params[16] = (intptr_t)&pivot;
	params[17] = (intptr_t)&generateOutOfBounds;
	params[18] = (intptr_t)&alignByGeometry;
	params[19] = (intptr_t)&error;
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
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetVerticesInternal(mscorlib::System::Object* vertices)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVerticesInternal", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)vertices;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetCharactersInternal(mscorlib::System::Object* characters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCharactersInternal", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)characters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::GetLinesInternal(mscorlib::System::Object* lines)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLinesInternal", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)lines;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::get_rectExtents_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rectExtents_Injected", std::vector<std::string> { "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_TextRenderingModule::UnityEngine::TextGenerator::Populate_Internal_Injected(mscorlib::System::String* str, UnityEngine_TextRenderingModule::UnityEngine::Font* font, UnityEngine_CoreModule::UnityEngine::Color& color, int32_t fontSize, float scaleFactor, float lineSpacing, UnityEngine_TextRenderingModule::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, UnityEngine_TextRenderingModule::UnityEngine::TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uint32_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Populate_Internal_Injected", std::vector<std::string> { "System.String", "UnityEngine.Font", "UnityEngine.Color&", "System.Int32", "System.Single", "System.Single", "UnityEngine.FontStyle", "System.Boolean", "System.Boolean", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "UnityEngine.TextAnchor", "System.Single", "System.Single", "System.Single", "System.Single", "System.Boolean", "System.Boolean", "System.UInt32&" });
	intptr_t* params = new intptr_t[22];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)font;
	params[2] = (intptr_t)&color;
	params[3] = (intptr_t)&fontSize;
	params[4] = (intptr_t)&scaleFactor;
	params[5] = (intptr_t)&lineSpacing;
	params[6] = (intptr_t)&style;
	params[7] = (intptr_t)&richText;
	params[8] = (intptr_t)&resizeTextForBestFit;
	params[9] = (intptr_t)&resizeTextMinSize;
	params[10] = (intptr_t)&resizeTextMaxSize;
	params[11] = (intptr_t)&verticalOverFlow;
	params[12] = (intptr_t)&horizontalOverflow;
	params[13] = (intptr_t)&updateBounds;
	params[14] = (intptr_t)&anchor;
	params[15] = (intptr_t)&extentsX;
	params[16] = (intptr_t)&extentsY;
	params[17] = (intptr_t)&pivotX;
	params[18] = (intptr_t)&pivotY;
	params[19] = (intptr_t)&generateOutOfBounds;
	params[20] = (intptr_t)&alignByGeometry;
	params[21] = (intptr_t)&error;
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
