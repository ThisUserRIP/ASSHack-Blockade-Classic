#include "I2_Loc_LanguageSourceData___c.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::LanguageSourceData___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::I2::Loc::LanguageSourceData::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::LanguageSourceData___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::I2::Loc::LanguageSourceData___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::LanguageSourceData___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::I2::Loc::LanguageSourceData___c::_UpdateAssetDictionary_b__39_0(UnityEngine_CoreModule::UnityEngine::Object* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<UpdateAssetDictionary>b__39_0", std::vector<std::string> { "UnityEngine.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x;
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
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData___c::_UpdateAssetDictionary_b__39_1(UnityEngine_CoreModule::UnityEngine::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<UpdateAssetDictionary>b__39_1", std::vector<std::string> { "UnityEngine.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LanguageSourceData___c::_UpdateAssetDictionary_b__39_2(System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>* g)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<UpdateAssetDictionary>b__39_2", std::vector<std::string> { "System.Linq.IGrouping`2<System.String,UnityEngine.Object>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)g;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Object* Assembly_CSharp::I2::Loc::LanguageSourceData___c::_UpdateAssetDictionary_b__39_3(System_Core::System::Linq::IGrouping_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>* g)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<UpdateAssetDictionary>b__39_3", std::vector<std::string> { "System.Linq.IGrouping`2<System.String,UnityEngine.Object>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)g;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
int32_t Assembly_CSharp::I2::Loc::LanguageSourceData___c::_Export_I2CSV_b__43_0(Assembly_CSharp::I2::Loc::TermData* a, Assembly_CSharp::I2::Loc::TermData* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Export_I2CSV>b__43_0", std::vector<std::string> { "I2.Loc.TermData", "I2.Loc.TermData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
int32_t Assembly_CSharp::I2::Loc::LanguageSourceData___c::_Export_CSV_b__47_0(Assembly_CSharp::I2::Loc::TermData* a, Assembly_CSharp::I2::Loc::TermData* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Export_CSV>b__47_0", std::vector<std::string> { "I2.Loc.TermData", "I2.Loc.TermData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
