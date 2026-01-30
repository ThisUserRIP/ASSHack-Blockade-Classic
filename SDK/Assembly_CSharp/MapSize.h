#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct MiniMap; };
namespace Assembly_CSharp { struct Client; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct MapSize : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::MiniMap* MiniMap;
		Assembly_CSharp::Client* cscl;
		int32_t x_min;
		int32_t x_max;
		int32_t y_min;
		int32_t y_max;
		int32_t z_min;
		int32_t z_max;
		bool show;
		UnityEngine_CoreModule::UnityEngine::Rect r_window;
		void Awake();
		void OnActive();
		void OnGUI();
		void DrawWindow(int32_t wid);
		void DrawMapTop(int32_t x, int32_t y);
		void DrawMapSide(int32_t x, int32_t y);
		void DrawSize(int32_t x, int32_t y);
		void _ctor();
	};
}

