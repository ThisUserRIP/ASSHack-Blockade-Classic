#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_IKSolverVR.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_VirtualBone; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverVR_BodyPart : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _sqrMag_k__BackingField;
		float _mag_k__BackingField;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones;
		bool initiated;
		UnityEngine_CoreModule::UnityEngine::Vector3 rootPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation;
		int32_t index;
		void OnRead(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);
		void PreSolve();
		void Write(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>& solvedPositions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>& solvedRotations);
		void ApplyOffsets();
		void ResetOffsets();
		float get_sqrMag();
		void set_sqrMag(float value);
		float get_mag();
		void set_mag(float value);
		void Read(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);
		void MovePosition(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void MoveRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void Translate(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void TranslateRoot(UnityEngine_CoreModule::UnityEngine::Vector3 newRootPos, UnityEngine_CoreModule::UnityEngine::Quaternion newRootRot);
		void RotateTo(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* bone, UnityEngine_CoreModule::UnityEngine::Quaternion rotation, float weight);
		void Visualize(UnityEngine_CoreModule::UnityEngine::Color color);
		void Visualize();
		void _ctor();
	};
}

