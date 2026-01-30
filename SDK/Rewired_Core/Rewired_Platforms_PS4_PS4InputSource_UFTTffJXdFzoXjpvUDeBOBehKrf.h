#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_PS4_PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW.h"
#include "Rewired_Platforms_PS4_PS4InputSource.h"
namespace Rewired_Core::Rewired::Platforms::PS4 { struct PS4InputSource; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "Rewired_Platforms_PS4_PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW_nmelmNFdhjAXjGFSbgpXlRKTAIzR.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct PS4InputSource_UFTTffJXdFzoXjpvUDeBOBehKrf : Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t nqKVQYeHPURShKceSCWcfBjkSBd;
		int32_t WChbHDgaSmBMqERxxShnhbmGIfv;
		UnityEngine_CoreModule::UnityEngine::Vector2 iAPXgqzeURtQtixDdUtRpCvoDCD;
		int32_t ZCVgSoiOgeixsfxkHrkjoVpfOsc;
		UnityEngine_CoreModule::UnityEngine::Vector2 glNTUCjvSUlRtiRoXheSiILcpGC;
		Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW_nmelmNFdhjAXjGFSbgpXlRKTAIzR fXCcZhYArbQHdjjjJhiLUgxDgws;
		int32_t BWUsAFPrbHjqwSLilmwfMpVUuED;
		int32_t JuAvWLCJcfLOVPTJeQOLQMzBstO;
		int32_t NkGOyIJuOfMksvPucxmJUYpAWfL;
		int32_t yMXFFVJkenhmkaFkDmeMwLFJVCtZ;
		float sdvGRwChZKctVsRsqHcUFDhbfHYi;
		struct StaticFields
		{
			int32_t HQGwtFkfrtpKCnZthIopFyqUkW;
			int32_t NFDrpyMSEQSmoWpJHEcLgpMdakK;
			float TBTMXIlhgXPpqKLuRbzcszGbike;
			int32_t JLeWdfQaMGiMHUkbmIfbrpIXRIu;
			int32_t hvQHupeVwYPMWShqgMjgISOSBGZ;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* name, int32_t playerId, int32_t unityJoystickId, int32_t handle);
		int32_t GetConnectionType();
		int32_t GetAnalogDeadZoneLeft();
		int32_t GetAnalogDeadZoneRight();
		int32_t get_maxTouches();
		float GetTouchPixelDensity();
		int32_t GetTouchpadResolutionX();
		int32_t GetTouchpadResolutionY();
		int32_t GetTouchCount();
		int32_t GetTouchId(int32_t A_1);
		bool GetTouchPositionAbsByIndex(int32_t A_1, UnityEngine_CoreModule::UnityEngine::Vector2& A_2);
		bool GetTouchPositionAbsByTouchId(int32_t A_1, UnityEngine_CoreModule::UnityEngine::Vector2& A_2);
		bool GetTouchPositionByIndex(int32_t A_1, UnityEngine_CoreModule::UnityEngine::Vector2& A_2);
		bool GetTouchPositionByTouchId(int32_t A_1, UnityEngine_CoreModule::UnityEngine::Vector2& A_2);
		bool IsTouchingByIndex(int32_t A_1);
		bool IsTouchingByTouchId(int32_t A_1);
		void UpdateElementValues();
		void OqEolqTlOjlkdBRVfNTslGhwDyh();
		int32_t bsxXgKpCeHAvONPEwbYzEXkPjQqT(int32_t A_1);
	};
}

