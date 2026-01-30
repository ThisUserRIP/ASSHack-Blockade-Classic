#include "I2_Loc_LanguageSourceData.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::LanguageSourceData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc", "LanguageSourceData");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::LanguageSourceData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Object* Assembly_CSharp::I2::Loc::LanguageSourceData::get_ownerObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ownerObject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::add_Event_OnSourceUpdateFromGoogle(Assembly_CSharp::I2::Loc::LanguageSource_fnOnSourceUpdated* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_Event_OnSourceUpdateFromGoogle", std::vector<std::string> { "I2.Loc.LanguageSource/fnOnSourceUpdated" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::remove_Event_OnSourceUpdateFromGoogle(Assembly_CSharp::I2::Loc::LanguageSource_fnOnSourceUpdated* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_Event_OnSourceUpdateFromGoogle", std::vector<std::string> { "I2.Loc.LanguageSource/fnOnSourceUpdated" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::IsEqualTo(Assembly_CSharp::I2::Loc::LanguageSourceData* Source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEqualTo", std::vector<std::string> { "I2.Loc.LanguageSourceData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Source;
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
bool Assembly_CSharp::I2::Loc::LanguageSourceData::ManagerHasASimilarSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ManagerHasASimilarSource");
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
void Assembly_CSharp::I2::Loc::LanguageSourceData::ClearAllData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearAllData");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::IsGlobalSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsGlobalSource");
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
void Assembly_CSharp::I2::Loc::LanguageSourceData::Editor_SetDirty()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Editor_SetDirty");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::UpdateAssetDictionary()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateAssetDictionary");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Object* Assembly_CSharp::I2::Loc::LanguageSourceData::FindAsset(mscorlib::System::String* Name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindAsset", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::HasAsset(UnityEngine_CoreModule::UnityEngine::Object* Obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasAsset", std::vector<std::string> { "UnityEngine.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Obj;
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
void Assembly_CSharp::I2::Loc::LanguageSourceData::AddAsset(UnityEngine_CoreModule::UnityEngine::Object* Obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAsset", std::vector<std::string> { "UnityEngine.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::Export_I2CSV(mscorlib::System::String* Category, wchar_t Separator, bool specializationsAsRows)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Export_I2CSV", std::vector<std::string> { "System.String", "System.Char", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Category;
	params[1] = (intptr_t)&Separator;
	params[2] = (intptr_t)&specializationsAsRows;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::AppendI2Term(mscorlib::System::Text::StringBuilder* Builder, int32_t nLanguages, mscorlib::System::String* Term, Assembly_CSharp::I2::Loc::TermData* termData, wchar_t Separator, mscorlib::System::String* forceSpecialization)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendI2Term", std::vector<std::string> { "System.Text.StringBuilder", "System.Int32", "System.String", "I2.Loc.TermData", "System.Char", "System.String" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)Builder;
	params[1] = (intptr_t)&nLanguages;
	params[2] = (intptr_t)Term;
	params[3] = (intptr_t)termData;
	params[4] = (intptr_t)&Separator;
	params[5] = (intptr_t)forceSpecialization;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::AppendI2Text(mscorlib::System::Text::StringBuilder* Builder, mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendI2Text", std::vector<std::string> { "System.Text.StringBuilder", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)Builder;
	params[1] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::Export_Language_to_Cache(int32_t langIndex, bool fillTermWithFallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Export_Language_to_Cache", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&langIndex;
	params[1] = (intptr_t)&fillTermWithFallback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::Export_CSV(mscorlib::System::String* Category, wchar_t Separator, bool specializationsAsRows)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Export_CSV", std::vector<std::string> { "System.String", "System.Char", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Category;
	params[1] = (intptr_t)&Separator;
	params[2] = (intptr_t)&specializationsAsRows;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::AppendTerm(mscorlib::System::Text::StringBuilder* Builder, int32_t nLanguages, mscorlib::System::String* Term, Assembly_CSharp::I2::Loc::TermData* termData, mscorlib::System::String* specialization, wchar_t Separator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendTerm", std::vector<std::string> { "System.Text.StringBuilder", "System.Int32", "System.String", "I2.Loc.TermData", "System.String", "System.Char" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)Builder;
	params[1] = (intptr_t)&nLanguages;
	params[2] = (intptr_t)Term;
	params[3] = (intptr_t)termData;
	params[4] = (intptr_t)specialization;
	params[5] = (intptr_t)&Separator;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::AppendString(mscorlib::System::Text::StringBuilder* Builder, mscorlib::System::String* Text, wchar_t Separator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendString", std::vector<std::string> { "System.Text.StringBuilder", "System.String", "System.Char" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Builder;
	params[1] = (intptr_t)Text;
	params[2] = (intptr_t)&Separator;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::AppendTranslation(mscorlib::System::Text::StringBuilder* Builder, mscorlib::System::String* Text, wchar_t Separator, mscorlib::System::String* tags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendTranslation", std::vector<std::string> { "System.Text.StringBuilder", "System.String", "System.Char", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)Builder;
	params[1] = (intptr_t)Text;
	params[2] = (intptr_t)&Separator;
	params[3] = (intptr_t)tags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* Assembly_CSharp::I2::Loc::LanguageSourceData::Export_Google_CreateWWWcall(Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Export_Google_CreateWWWcall", std::vector<std::string> { "I2.Loc.eSpreadsheetUpdateMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&UpdateMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::Export_Google_CreateData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Export_Google_CreateData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::Import_CSV(mscorlib::System::String* Category, mscorlib::System::String* CSVstring, Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode, wchar_t Separator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import_CSV", std::vector<std::string> { "System.String", "System.String", "I2.Loc.eSpreadsheetUpdateMode", "System.Char" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)Category;
	params[1] = (intptr_t)CSVstring;
	params[2] = (intptr_t)&UpdateMode;
	params[3] = (intptr_t)&Separator;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::Import_I2CSV(mscorlib::System::String* Category, mscorlib::System::String* I2CSVstring, Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import_I2CSV", std::vector<std::string> { "System.String", "System.String", "I2.Loc.eSpreadsheetUpdateMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Category;
	params[1] = (intptr_t)I2CSVstring;
	params[2] = (intptr_t)&UpdateMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::Import_CSV(mscorlib::System::String* Category, mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::String*>>* CSV, Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import_CSV", std::vector<std::string> { "System.String", "System.Collections.Generic.List`1<System.String[]>", "I2.Loc.eSpreadsheetUpdateMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Category;
	params[1] = (intptr_t)CSV;
	params[2] = (intptr_t)&UpdateMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::ArrayContains(mscorlib::System::String* MainText, IL2CPP::Array<mscorlib::System::String*>* texts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ArrayContains", std::vector<std::string> { "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)MainText;
	params[1] = (intptr_t)texts;
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
Assembly_CSharp::I2::Loc::eTermType Assembly_CSharp::I2::Loc::LanguageSourceData::GetTermType(mscorlib::System::String* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTermType", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::I2::Loc::eTermType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::I2::Loc::eTermType));
		return ret;
	}
	return static_cast<Assembly_CSharp::I2::Loc::eTermType>(*(Assembly_CSharp::I2::Loc::eTermType*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::Import_Language_from_Cache(int32_t langIndex, mscorlib::System::String* langData, bool useFallback, bool onlyCurrentSpecialization)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import_Language_from_Cache", std::vector<std::string> { "System.Int32", "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&langIndex;
	params[1] = (intptr_t)langData;
	params[2] = (intptr_t)&useFallback;
	params[3] = (intptr_t)&onlyCurrentSpecialization;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::FreeUnusedLanguages()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FreeUnusedLanguages");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::Import_Google_FromCache()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import_Google_FromCache");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::IsNewerVersion(mscorlib::System::String* currentVersion, mscorlib::System::String* newVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsNewerVersion", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)currentVersion;
	params[1] = (intptr_t)newVersion;
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
void Assembly_CSharp::I2::Loc::LanguageSourceData::Import_Google(bool ForceUpdate, bool justCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import_Google", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ForceUpdate;
	params[1] = (intptr_t)&justCheck;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::GetSourcePlayerPrefName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSourcePlayerPrefName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::I2::Loc::LanguageSourceData::Import_Google_Coroutine(bool JustCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import_Google_Coroutine", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&JustCheck;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::ApplyDownloadedDataOnSceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyDownloadedDataOnSceneLoaded", std::vector<std::string> { "UnityEngine.SceneManagement.Scene", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&scene;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::ApplyDownloadedDataFromGoogle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyDownloadedDataFromGoogle");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* Assembly_CSharp::I2::Loc::LanguageSourceData::Import_Google_CreateWWWcall(bool ForceUpdate, bool justCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import_Google_CreateWWWcall", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ForceUpdate;
	params[1] = (intptr_t)&justCheck;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest*)returnValue;
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::HasGoogleSpreadsheet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasGoogleSpreadsheet");
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
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::Import_Google_Result(mscorlib::System::String* JsonString, Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode, bool saveInPlayerPrefs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import_Google_Result", std::vector<std::string> { "System.String", "I2.Loc.eSpreadsheetUpdateMode", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)JsonString;
	params[1] = (intptr_t)&UpdateMode;
	params[2] = (intptr_t)&saveInPlayerPrefs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Assembly_CSharp::I2::Loc::LanguageSourceData::GetLanguageIndex(mscorlib::System::String* language, bool AllowDiscartingRegion, bool SkipDisabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLanguageIndex", std::vector<std::string> { "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)language;
	params[1] = (intptr_t)&AllowDiscartingRegion;
	params[2] = (intptr_t)&SkipDisabled;
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
Assembly_CSharp::I2::Loc::LanguageData* Assembly_CSharp::I2::Loc::LanguageSourceData::GetLanguageData(mscorlib::System::String* language, bool AllowDiscartingRegion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLanguageData", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)language;
	params[1] = (intptr_t)&AllowDiscartingRegion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::I2::Loc::LanguageData*)returnValue;
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::IsCurrentLanguage(int32_t languageIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsCurrentLanguage", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&languageIndex;
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
int32_t Assembly_CSharp::I2::Loc::LanguageSourceData::GetLanguageIndexFromCode(mscorlib::System::String* Code, bool exactMatch, bool ignoreDisabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLanguageIndexFromCode", std::vector<std::string> { "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Code;
	params[1] = (intptr_t)&exactMatch;
	params[2] = (intptr_t)&ignoreDisabled;
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
int32_t Assembly_CSharp::I2::Loc::LanguageSourceData::GetCommonWordInLanguageNames(mscorlib::System::String* Language1, mscorlib::System::String* Language2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCommonWordInLanguageNames", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)Language1;
	params[1] = (intptr_t)Language2;
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
bool Assembly_CSharp::I2::Loc::LanguageSourceData::AreTheSameLanguage(mscorlib::System::String* Language1, mscorlib::System::String* Language2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AreTheSameLanguage", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)Language1;
	params[1] = (intptr_t)Language2;
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
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::GetLanguageWithoutRegion(mscorlib::System::String* Language)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLanguageWithoutRegion", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Language;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::AddLanguage(mscorlib::System::String* LanguageName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddLanguage", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)LanguageName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::AddLanguage(mscorlib::System::String* LanguageName, mscorlib::System::String* LanguageCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddLanguage", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)LanguageName;
	params[1] = (intptr_t)LanguageCode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::RemoveLanguage(mscorlib::System::String* LanguageName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveLanguage", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)LanguageName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Assembly_CSharp::I2::Loc::LanguageSourceData::GetLanguages(bool skipDisabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLanguages", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&skipDisabled;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Assembly_CSharp::I2::Loc::LanguageSourceData::GetLanguagesCode(bool allowRegions, bool skipDisabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLanguagesCode", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&allowRegions;
	params[1] = (intptr_t)&skipDisabled;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::IsLanguageEnabled(mscorlib::System::String* Language)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsLanguageEnabled", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Language;
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
void Assembly_CSharp::I2::Loc::LanguageSourceData::EnableLanguage(mscorlib::System::String* Language, bool bEnabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableLanguage", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)Language;
	params[1] = (intptr_t)&bEnabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::AllowUnloadingLanguages()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllowUnloadingLanguages");
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
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::GetSavedLanguageFileName(int32_t languageIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSavedLanguageFileName", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&languageIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::LoadLanguage(int32_t languageIndex, bool UnloadOtherLanguages, bool useFallback, bool onlyCurrentSpecialization, bool forceLoad)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadLanguage", std::vector<std::string> { "System.Int32", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&languageIndex;
	params[1] = (intptr_t)&UnloadOtherLanguages;
	params[2] = (intptr_t)&useFallback;
	params[3] = (intptr_t)&onlyCurrentSpecialization;
	params[4] = (intptr_t)&forceLoad;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::LoadAllLanguages(bool forceLoad)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAllLanguages", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&forceLoad;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::UnloadLanguage(int32_t languageIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnloadLanguage", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&languageIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::SaveLanguages(bool unloadAll, Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileLocation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveLanguages", std::vector<std::string> { "System.Boolean", "I2.Loc.PersistentStorage/eFileType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&unloadAll;
	params[1] = (intptr_t)&fileLocation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::HasUnloadedLanguages()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasUnloadedLanguages");
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
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Assembly_CSharp::I2::Loc::LanguageSourceData::GetCategories(bool OnlyMainCategory, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Categories)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCategories", std::vector<std::string> { "System.Boolean", "System.Collections.Generic.List`1<System.String>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&OnlyMainCategory;
	params[1] = (intptr_t)Categories;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::GetKeyFromFullTerm(mscorlib::System::String* FullTerm, bool OnlyMainCategory)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyFromFullTerm", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)FullTerm;
	params[1] = (intptr_t)&OnlyMainCategory;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::GetCategoryFromFullTerm(mscorlib::System::String* FullTerm, bool OnlyMainCategory)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCategoryFromFullTerm", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)FullTerm;
	params[1] = (intptr_t)&OnlyMainCategory;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::DeserializeFullTerm(mscorlib::System::String* FullTerm, mscorlib::System::String& Key, mscorlib::System::String& Category, bool OnlyMainCategory)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeserializeFullTerm", std::vector<std::string> { "System.String", "System.String&", "System.String&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)FullTerm;
	params[1] = (intptr_t)&Key;
	params[2] = (intptr_t)&Category;
	params[3] = (intptr_t)&OnlyMainCategory;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::UpdateDictionary(bool force)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateDictionary", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&force;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData::GetTranslation(mscorlib::System::String* term, mscorlib::System::String* overrideLanguage, mscorlib::System::String* overrideSpecialization, bool skipDisabled, bool allowCategoryMistmatch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTranslation", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)term;
	params[1] = (intptr_t)overrideLanguage;
	params[2] = (intptr_t)overrideSpecialization;
	params[3] = (intptr_t)&skipDisabled;
	params[4] = (intptr_t)&allowCategoryMistmatch;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::TryGetTranslation(mscorlib::System::String* term, mscorlib::System::String& Translation, mscorlib::System::String* overrideLanguage, mscorlib::System::String* overrideSpecialization, bool skipDisabled, bool allowCategoryMistmatch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetTranslation", std::vector<std::string> { "System.String", "System.String&", "System.String", "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)term;
	params[1] = (intptr_t)&Translation;
	params[2] = (intptr_t)overrideLanguage;
	params[3] = (intptr_t)overrideSpecialization;
	params[4] = (intptr_t)&skipDisabled;
	params[5] = (intptr_t)&allowCategoryMistmatch;
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
bool Assembly_CSharp::I2::Loc::LanguageSourceData::TryGetFallbackTranslation(Assembly_CSharp::I2::Loc::TermData* termData, mscorlib::System::String& Translation, int32_t langIndex, mscorlib::System::String* overrideSpecialization, bool skipDisabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetFallbackTranslation", std::vector<std::string> { "I2.Loc.TermData", "System.String&", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)termData;
	params[1] = (intptr_t)&Translation;
	params[2] = (intptr_t)&langIndex;
	params[3] = (intptr_t)overrideSpecialization;
	params[4] = (intptr_t)&skipDisabled;
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
Assembly_CSharp::I2::Loc::TermData* Assembly_CSharp::I2::Loc::LanguageSourceData::AddTerm(mscorlib::System::String* term)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTerm", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)term;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::I2::Loc::TermData*)returnValue;
}
Assembly_CSharp::I2::Loc::TermData* Assembly_CSharp::I2::Loc::LanguageSourceData::GetTermData(mscorlib::System::String* term, bool allowCategoryMistmatch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTermData", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)term;
	params[1] = (intptr_t)&allowCategoryMistmatch;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::I2::Loc::TermData*)returnValue;
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData::ContainsTerm(mscorlib::System::String* term)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsTerm", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)term;
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
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Assembly_CSharp::I2::Loc::LanguageSourceData::GetTermsList(mscorlib::System::String* Category)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTermsList", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Category;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
Assembly_CSharp::I2::Loc::TermData* Assembly_CSharp::I2::Loc::LanguageSourceData::AddTerm(mscorlib::System::String* NewTerm, Assembly_CSharp::I2::Loc::eTermType termType, bool SaveSource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTerm", std::vector<std::string> { "System.String", "I2.Loc.eTermType", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)NewTerm;
	params[1] = (intptr_t)&termType;
	params[2] = (intptr_t)&SaveSource;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::I2::Loc::TermData*)returnValue;
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::RemoveTerm(mscorlib::System::String* term)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveTerm", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)term;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::ValidateFullTerm(mscorlib::System::String& Term)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateFullTerm", std::vector<std::string> { "System.String&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&Term;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
