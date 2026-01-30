#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
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
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct SeasonMission; };
namespace Assembly_CSharp { struct DailyMission; };

namespace Assembly_CSharp
{
	struct Social : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		int32_t draw_type;
		IL2CPP::Array<bool>* hover_type;
		IL2CPP::Array<bool>* weeks_hover;
		int32_t current_week;
		bool draw_season;
		bool draw_daily;
		bool draw_social;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		UnityEngine_CoreModule::UnityEngine::Vector2 missionsViewVector;
		float mh;
		UnityEngine_CoreModule::UnityEngine::Vector2 mPos;
		UnityEngine_CoreModule::UnityEngine::Vector2 mPos2;
		struct StaticFields
		{
			bool err;
			bool done;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void myGlobalInit();
		void OnGUI();
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id, int32_t length);
		void DoWindow(int32_t windowID);
		void DrawCategory0();
		void DrawCategory1();
		int32_t DrawMission(int32_t x, int32_t y, Assembly_CSharp::SeasonMission* _sm);
		int32_t DrawDailyMission(int32_t x, int32_t y, Assembly_CSharp::DailyMission* _sm);
		void DrawCategory2();
		void Open();
		void cb_social(mscorlib::System::String* _result);
		void _ctor();
		static void _cctor();
	};
}

