#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct TouchInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool YkdfRHhpaONctjUwqLWAUUHrfMSh;
		int32_t aFgGqXnmXLIWUWMBMNcQKfVwrZc;
		UnityEngine_CoreModule::UnityEngine::Vector2 KpxMkVxOMQbmGOREPdioHiOcKRid;
		UnityEngine_CoreModule::UnityEngine::Vector2 qfFHsqOLcJWrmjSFFFDHaKNnCtKG;
		UnityEngine_CoreModule::UnityEngine::Vector2 cTWheiXGmOyfsjmKQHFLKxbGWGMj;
		UnityEngine_CoreModule::UnityEngine::Vector2 itrdwqhbnLxVvKkUkgIxQCUghuF;
		float qFdatpdHwlsGfvWPHBjrKUxhesNS;
		int32_t gLHVejjmCVggWCVCdneIgXPpMDX;
		bool get_isValid();
		void set_isValid(bool value);
		int32_t get_touchId();
		void set_touchId(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_touchPos();
		void set_touchPos(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_touchPosRaw();
		void set_touchPosRaw(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_deltaPos();
		void set_deltaPos(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_deltaPosRaw();
		void set_deltaPosRaw(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		float get_deltaTime();
		void set_deltaTime(float value);
		int32_t get_tapCount();
		void set_tapCount(int32_t value);
		void _ctor(bool isValid, int32_t touchId, UnityEngine_CoreModule::UnityEngine::Vector2 touchPos, UnityEngine_CoreModule::UnityEngine::Vector2 touchPosRaw, UnityEngine_CoreModule::UnityEngine::Vector2 deltaPos, UnityEngine_CoreModule::UnityEngine::Vector2 deltaPosRaw, float deltaTime, int32_t tapCount);
		static Rewired_Core::Rewired::TouchInfo get_Invalid();
	};
}

