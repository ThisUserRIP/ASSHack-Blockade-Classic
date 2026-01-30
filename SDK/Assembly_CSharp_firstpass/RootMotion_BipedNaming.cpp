#include "RootMotion_BipedNaming.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion", "BipedNaming");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetBonesOfType(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBonesOfType", std::vector<std::string> { "RootMotion.BipedNaming/BoneType", "UnityEngine.Transform[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&boneType;
	params[1] = (intptr_t)bones;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>*)returnValue;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetBonesOfSide(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBonesOfSide", std::vector<std::string> { "RootMotion.BipedNaming/BoneSide", "UnityEngine.Transform[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&boneSide;
	params[1] = (intptr_t)bones;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>*)returnValue;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetBonesOfTypeAndSide(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBonesOfTypeAndSide", std::vector<std::string> { "RootMotion.BipedNaming/BoneType", "RootMotion.BipedNaming/BoneSide", "UnityEngine.Transform[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&boneType;
	params[1] = (intptr_t)&boneSide;
	params[2] = (intptr_t)bones;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Transform* Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetFirstBoneOfTypeAndSide(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstBoneOfTypeAndSide", std::vector<std::string> { "RootMotion.BipedNaming/BoneType", "RootMotion.BipedNaming/BoneSide", "UnityEngine.Transform[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&boneType;
	params[1] = (intptr_t)&boneSide;
	params[2] = (intptr_t)bones;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Transform*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Transform* Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetNamingMatch(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms, IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* namings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNamingMatch", std::vector<std::string> { "UnityEngine.Transform[]", "System.String[][]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)transforms;
	params[1] = (intptr_t)namings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Transform*)returnValue;
}
Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetBoneType(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBoneType", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType));
		return ret;
	}
	return static_cast<Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType>(*(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetBoneSide(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBoneSide", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide));
		return ret;
	}
	return static_cast<Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide>(*(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Transform* Assembly_CSharp_firstpass::RootMotion::BipedNaming::GetBone(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* namings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBone", std::vector<std::string> { "UnityEngine.Transform[]", "RootMotion.BipedNaming/BoneType", "RootMotion.BipedNaming/BoneSide", "System.String[][]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)transforms;
	params[1] = (intptr_t)&boneType;
	params[2] = (intptr_t)&boneSide;
	params[3] = (intptr_t)namings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Transform*)returnValue;
}
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::isLeft(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isLeft", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::isRight(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isRight", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::isSpine(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isSpine", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::isHead(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isHead", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::isArm(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isArm", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::isLeg(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isLeg", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::isTail(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isTail", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::isEye(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isEye", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::isTypeExclude(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isTypeExclude", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::matchesNaming(mscorlib::System::String* boneName, IL2CPP::Array<mscorlib::System::String*>* namingConvention)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "matchesNaming", std::vector<std::string> { "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)boneName;
	params[1] = (intptr_t)namingConvention;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::excludesNaming(mscorlib::System::String* boneName, IL2CPP::Array<mscorlib::System::String*>* namingConvention)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "excludesNaming", std::vector<std::string> { "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)boneName;
	params[1] = (intptr_t)namingConvention;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::matchesLastLetter(mscorlib::System::String* boneName, IL2CPP::Array<mscorlib::System::String*>* namingConvention)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "matchesLastLetter", std::vector<std::string> { "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)boneName;
	params[1] = (intptr_t)namingConvention;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedNaming::LastLetterIs(mscorlib::System::String* boneName, mscorlib::System::String* letter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LastLetterIs", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)boneName;
	params[1] = (intptr_t)letter;
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
mscorlib::System::String* Assembly_CSharp_firstpass::RootMotion::BipedNaming::firstLetter(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "firstLetter", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp_firstpass::RootMotion::BipedNaming::lastLetter(mscorlib::System::String* boneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lastLetter", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)boneName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp_firstpass::RootMotion::BipedNaming::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
