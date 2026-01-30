#include "I2_Loc_GoogleTranslation.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::GoogleTranslation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc", "GoogleTranslation");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::GoogleTranslation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp::I2::Loc::GoogleTranslation::CanTranslate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanTranslate");
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
void Assembly_CSharp::I2::Loc::GoogleTranslation::Translate(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo, Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslated* OnTranslationReady)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Translate", std::vector<std::string> { "System.String", "System.String", "System.String", "I2.Loc.GoogleTranslation/fnOnTranslated" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)LanguageCodeFrom;
	params[2] = (intptr_t)LanguageCodeTo;
	params[3] = (intptr_t)OnTranslationReady;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::ForceTranslate(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForceTranslate", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)LanguageCodeFrom;
	params[2] = (intptr_t)LanguageCodeTo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::I2::Loc::GoogleTranslation::Translate(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests, Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslationReady* OnTranslationReady, bool usePOST)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Translate", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>", "I2.Loc.GoogleTranslation/fnOnTranslationReady", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)requests;
	params[1] = (intptr_t)OnTranslationReady;
	params[2] = (intptr_t)&usePOST;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::I2::Loc::GoogleTranslation::ForceTranslate(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests, bool usePOST)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForceTranslate", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)requests;
	params[1] = (intptr_t)&usePOST;
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
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Assembly_CSharp::I2::Loc::GoogleTranslation::ConvertTranslationRequest(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests, bool encodeGET)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTranslationRequest", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)requests;
	params[1] = (intptr_t)&encodeGET;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
void Assembly_CSharp::I2::Loc::GoogleTranslation::AddTranslationJob(Assembly_CSharp::I2::Loc::TranslationJob* job)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTranslationJob", std::vector<std::string> { "I2.Loc.TranslationJob" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)job;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::I2::Loc::GoogleTranslation::WaitForTranslations()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitForTranslations");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::ParseTranslationResult(mscorlib::System::String* html, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseTranslationResult", std::vector<std::string> { "System.String", "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)html;
	params[1] = (intptr_t)requests;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Assembly_CSharp::I2::Loc::GoogleTranslation::IsTranslating()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsTranslating");
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
void Assembly_CSharp::I2::Loc::GoogleTranslation::CancelCurrentGoogleTranslations()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CancelCurrentGoogleTranslations");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::GoogleTranslation::CreateQueries(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateQueries", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)LanguageCodeFrom;
	params[2] = (intptr_t)LanguageCodeTo;
	params[3] = (intptr_t)dict;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::GoogleTranslation::CreateQueries_Plurals(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateQueries_Plurals", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)LanguageCodeFrom;
	params[2] = (intptr_t)LanguageCodeTo;
	params[3] = (intptr_t)dict;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::GoogleTranslation::AddQuery(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddQuery", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)LanguageCodeFrom;
	params[2] = (intptr_t)LanguageCodeTo;
	params[3] = (intptr_t)dict;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::GetTranslation(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTranslation", std::vector<std::string> { "System.String", "System.String", "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)LanguageCodeTo;
	params[2] = (intptr_t)dict;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Assembly_CSharp::I2::Loc::TranslationQuery Assembly_CSharp::I2::Loc::GoogleTranslation::FindQueryFromOrigText(mscorlib::System::String* origText, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindQueryFromOrigText", std::vector<std::string> { "System.String", "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)origText;
	params[1] = (intptr_t)dict;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::I2::Loc::TranslationQuery ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::I2::Loc::TranslationQuery));
		return ret;
	}
	return static_cast<Assembly_CSharp::I2::Loc::TranslationQuery>(*(Assembly_CSharp::I2::Loc::TranslationQuery*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::I2::Loc::GoogleTranslation::HasParameters(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasParameters", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
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
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::GetPluralParameter(mscorlib::System::String* text, bool forceTag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPluralParameter", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&forceTag;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::GetPluralText(mscorlib::System::String* text, mscorlib::System::String* pluralType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPluralText", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)pluralType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Assembly_CSharp::I2::Loc::GoogleTranslation::FindClosingTag(mscorlib::System::String* tag, System::System::Text::RegularExpressions::MatchCollection* matches, int32_t startIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindClosingTag", std::vector<std::string> { "System.String", "System.Text.RegularExpressions.MatchCollection", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)tag;
	params[1] = (intptr_t)matches;
	params[2] = (intptr_t)&startIndex;
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
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::GetGoogleNoTranslateTag(int32_t tagNumber)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGoogleNoTranslateTag", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&tagNumber;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::I2::Loc::GoogleTranslation::ParseNonTranslatableElements(Assembly_CSharp::I2::Loc::TranslationQuery& query)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseNonTranslatableElements", std::vector<std::string> { "I2.Loc.TranslationQuery&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&query;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::GetQueryResult(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetQueryResult", std::vector<std::string> { "System.String", "System.String", "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)LanguageCodeTo;
	params[2] = (intptr_t)dict;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::RebuildTranslation(mscorlib::System::String* text, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict, mscorlib::System::String* LanguageCodeTo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RebuildTranslation", std::vector<std::string> { "System.String", "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)dict;
	params[2] = (intptr_t)LanguageCodeTo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::RebuildTranslation_Plural(mscorlib::System::String* text, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict, mscorlib::System::String* LanguageCodeTo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RebuildTranslation_Plural", std::vector<std::string> { "System.String", "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)dict;
	params[2] = (intptr_t)LanguageCodeTo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::UppercaseFirst(mscorlib::System::String* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UppercaseFirst", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::GoogleTranslation::TitleCase(mscorlib::System::String* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TitleCase", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::I2::Loc::GoogleTranslation::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
