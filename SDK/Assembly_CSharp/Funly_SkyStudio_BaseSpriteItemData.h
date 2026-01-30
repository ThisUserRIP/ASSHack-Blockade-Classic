#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::Funly::SkyStudio { struct SpriteSheetData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "Funly_SkyStudio_BaseSpriteItemData_SpriteState.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct BaseSpriteItemData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Funly::SkyStudio::SpriteSheetData* spriteSheetData;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 _modelMatrix_k__BackingField;
		Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData_SpriteState _state_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 _spritePosition_k__BackingField;
		float _startTime_k__BackingField;
		float _endTime_k__BackingField;
		float delay;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_modelMatrix();
		void set_modelMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData_SpriteState get_state();
		void set_state(Assembly_CSharp::Funly::SkyStudio::BaseSpriteItemData_SpriteState value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_spritePosition();
		void set_spritePosition(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		float get_startTime();
		void set_startTime(float value);
		float get_endTime();
		void set_endTime(float value);
		void _ctor();
		void SetTRSMatrix(UnityEngine_CoreModule::UnityEngine::Vector3 worldPosition, UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 scale);
		void Start();
		void Continue();
		void Reset();
		static float CalculateStartTimeWithDelay(float delay);
		static float CalculateEndTime(float startTime, int32_t itemCount, int32_t animationSpeed);
	};
}

