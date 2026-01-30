#include "RootMotion_BipedReferences.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::BipedReferences::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion", "BipedReferences");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::BipedReferences::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::get_isFilled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isFilled");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::get_isEmpty()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isEmpty");
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::IsEmpty(bool includeRoot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEmpty", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&includeRoot;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::Contains(UnityEngine_CoreModule::UnityEngine::Transform* t, bool ignoreRoot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Contains", std::vector<std::string> { "UnityEngine.Transform", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&ignoreRoot;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::AutoDetectReferences(Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, UnityEngine_CoreModule::UnityEngine::Transform* root, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AutoDetectReferences", std::vector<std::string> { "RootMotion.BipedReferences&", "UnityEngine.Transform", "RootMotion.BipedReferences/AutoDetectParams" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&references;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)&autoDetectParams;
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
void Assembly_CSharp_firstpass::RootMotion::BipedReferences::DetectReferencesByNaming(Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, UnityEngine_CoreModule::UnityEngine::Transform* root, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DetectReferencesByNaming", std::vector<std::string> { "RootMotion.BipedReferences&", "UnityEngine.Transform", "RootMotion.BipedReferences/AutoDetectParams" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&references;
	params[1] = (intptr_t)root;
	params[2] = (intptr_t)&autoDetectParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::BipedReferences::AssignHumanoidReferences(Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, UnityEngine_AnimationModule::UnityEngine::Animator* animator, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AssignHumanoidReferences", std::vector<std::string> { "RootMotion.BipedReferences&", "UnityEngine.Animator", "RootMotion.BipedReferences/AutoDetectParams" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&references;
	params[1] = (intptr_t)animator;
	params[2] = (intptr_t)&autoDetectParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::SetupError(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& errorMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupError", std::vector<std::string> { "RootMotion.BipedReferences", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)references;
	params[1] = (intptr_t)&errorMessage;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::SetupWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupWarning", std::vector<std::string> { "RootMotion.BipedReferences", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)references;
	params[1] = (intptr_t)&warningMessage;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::IsNeckBone(UnityEngine_CoreModule::UnityEngine::Transform* bone, UnityEngine_CoreModule::UnityEngine::Transform* leftUpperArm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsNeckBone", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bone;
	params[1] = (intptr_t)leftUpperArm;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::AddBoneToEyes(UnityEngine_CoreModule::UnityEngine::Transform* bone, Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddBoneToEyes", std::vector<std::string> { "UnityEngine.Transform", "RootMotion.BipedReferences&", "RootMotion.BipedReferences/AutoDetectParams" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bone;
	params[1] = (intptr_t)&references;
	params[2] = (intptr_t)&autoDetectParams;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::AddBoneToSpine(UnityEngine_CoreModule::UnityEngine::Transform* bone, Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddBoneToSpine", std::vector<std::string> { "UnityEngine.Transform", "RootMotion.BipedReferences&", "RootMotion.BipedReferences/AutoDetectParams" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bone;
	params[1] = (intptr_t)&references;
	params[2] = (intptr_t)&autoDetectParams;
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
void Assembly_CSharp_firstpass::RootMotion::BipedReferences::DetectLimb(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, UnityEngine_CoreModule::UnityEngine::Transform& firstBone, UnityEngine_CoreModule::UnityEngine::Transform& secondBone, UnityEngine_CoreModule::UnityEngine::Transform& lastBone, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DetectLimb", std::vector<std::string> { "RootMotion.BipedNaming/BoneType", "RootMotion.BipedNaming/BoneSide", "UnityEngine.Transform&", "UnityEngine.Transform&", "UnityEngine.Transform&", "UnityEngine.Transform[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&boneType;
	params[1] = (intptr_t)&boneSide;
	params[2] = (intptr_t)&firstBone;
	params[3] = (intptr_t)&secondBone;
	params[4] = (intptr_t)&lastBone;
	params[5] = (intptr_t)transforms;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::BipedReferences::AddBoneToHierarchy(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>& bones, UnityEngine_CoreModule::UnityEngine::Transform* transform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddBoneToHierarchy", std::vector<std::string> { "UnityEngine.Transform[]&", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&bones;
	params[1] = (intptr_t)transform;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::LimbError(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, mscorlib::System::String& errorMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LimbError", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bone1;
	params[1] = (intptr_t)bone2;
	params[2] = (intptr_t)bone3;
	params[3] = (intptr_t)&errorMessage;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::LimbWarning(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, mscorlib::System::String& warningMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LimbWarning", std::vector<std::string> { "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bone1;
	params[1] = (intptr_t)bone2;
	params[2] = (intptr_t)bone3;
	params[3] = (intptr_t)&warningMessage;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::SpineError(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& errorMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SpineError", std::vector<std::string> { "RootMotion.BipedReferences", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)references;
	params[1] = (intptr_t)&errorMessage;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::SpineWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SpineWarning", std::vector<std::string> { "RootMotion.BipedReferences", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)references;
	params[1] = (intptr_t)&warningMessage;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::EyesError(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& errorMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EyesError", std::vector<std::string> { "RootMotion.BipedReferences", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)references;
	params[1] = (intptr_t)&errorMessage;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::EyesWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EyesWarning", std::vector<std::string> { "RootMotion.BipedReferences", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)references;
	params[1] = (intptr_t)&warningMessage;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::RootHeightWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RootHeightWarning", std::vector<std::string> { "RootMotion.BipedReferences", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)references;
	params[1] = (intptr_t)&warningMessage;
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
bool Assembly_CSharp_firstpass::RootMotion::BipedReferences::FacingAxisWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FacingAxisWarning", std::vector<std::string> { "RootMotion.BipedReferences", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)references;
	params[1] = (intptr_t)&warningMessage;
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
float Assembly_CSharp_firstpass::RootMotion::BipedReferences::GetVerticalOffset(UnityEngine_CoreModule::UnityEngine::Vector3 p1, UnityEngine_CoreModule::UnityEngine::Vector3 p2, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVerticalOffset", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&p1;
	params[1] = (intptr_t)&p2;
	params[2] = (intptr_t)&rotation;
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
void Assembly_CSharp_firstpass::RootMotion::BipedReferences::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
