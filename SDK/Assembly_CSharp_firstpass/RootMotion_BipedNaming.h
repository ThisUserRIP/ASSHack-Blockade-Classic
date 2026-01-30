#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "RootMotion_BipedNaming_BoneType.h"
#include "RootMotion_BipedNaming_BoneSide.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct BipedNaming : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* typeLeft;
			IL2CPP::Array<mscorlib::System::String*>* typeRight;
			IL2CPP::Array<mscorlib::System::String*>* typeSpine;
			IL2CPP::Array<mscorlib::System::String*>* typeHead;
			IL2CPP::Array<mscorlib::System::String*>* typeArm;
			IL2CPP::Array<mscorlib::System::String*>* typeLeg;
			IL2CPP::Array<mscorlib::System::String*>* typeTail;
			IL2CPP::Array<mscorlib::System::String*>* typeEye;
			IL2CPP::Array<mscorlib::System::String*>* typeExclude;
			IL2CPP::Array<mscorlib::System::String*>* typeExcludeSpine;
			IL2CPP::Array<mscorlib::System::String*>* typeExcludeHead;
			IL2CPP::Array<mscorlib::System::String*>* typeExcludeArm;
			IL2CPP::Array<mscorlib::System::String*>* typeExcludeLeg;
			IL2CPP::Array<mscorlib::System::String*>* typeExcludeTail;
			IL2CPP::Array<mscorlib::System::String*>* typeExcludeEye;
			IL2CPP::Array<mscorlib::System::String*>* pelvis;
			IL2CPP::Array<mscorlib::System::String*>* hand;
			IL2CPP::Array<mscorlib::System::String*>* foot;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* GetBonesOfType(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* GetBonesOfSide(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* GetBonesOfTypeAndSide(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones);
		static UnityEngine_CoreModule::UnityEngine::Transform* GetFirstBoneOfTypeAndSide(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones);
		static UnityEngine_CoreModule::UnityEngine::Transform* GetNamingMatch(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms, IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* namings);
		static Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType GetBoneType(mscorlib::System::String* boneName);
		static Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide GetBoneSide(mscorlib::System::String* boneName);
		static UnityEngine_CoreModule::UnityEngine::Transform* GetBone(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, IL2CPP::Array<IL2CPP::Array<mscorlib::System::String*>*>* namings);
		static bool isLeft(mscorlib::System::String* boneName);
		static bool isRight(mscorlib::System::String* boneName);
		static bool isSpine(mscorlib::System::String* boneName);
		static bool isHead(mscorlib::System::String* boneName);
		static bool isArm(mscorlib::System::String* boneName);
		static bool isLeg(mscorlib::System::String* boneName);
		static bool isTail(mscorlib::System::String* boneName);
		static bool isEye(mscorlib::System::String* boneName);
		static bool isTypeExclude(mscorlib::System::String* boneName);
		static bool matchesNaming(mscorlib::System::String* boneName, IL2CPP::Array<mscorlib::System::String*>* namingConvention);
		static bool excludesNaming(mscorlib::System::String* boneName, IL2CPP::Array<mscorlib::System::String*>* namingConvention);
		static bool matchesLastLetter(mscorlib::System::String* boneName, IL2CPP::Array<mscorlib::System::String*>* namingConvention);
		static bool LastLetterIs(mscorlib::System::String* boneName, mscorlib::System::String* letter);
		static mscorlib::System::String* firstLetter(mscorlib::System::String* boneName);
		static mscorlib::System::String* lastLetter(mscorlib::System::String* boneName);
		static void _cctor();
	};
}

