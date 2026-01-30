#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "ITEMS_CATEGORY.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };

namespace Assembly_CSharp
{
	struct Master : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		int32_t type;
		IL2CPP::Array<bool>* hovermode;
		float lastupdate;
		int32_t x_pos;
		int32_t y_pos;
		int32_t icount;
		float sh;
		float shv;
		int32_t y_cat_ofs;
		bool buylock;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector2;
		void myGlobalInit();
		void ResetPos();
		void DrawCategory(Assembly_CSharp::ITEMS_CATEGORY cat);
		void OnGUI();
		void DoWindow(int32_t windowID);
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id, int32_t length);
		void OnActive();
		void DrawActiveItem();
		mscorlib::System::Collections::IEnumerator* get_inv();
		void DrawWeaponData(bool hdamage, bool hclip, bool hbackpack, bool hzombie);
		void DrawVehicleData(bool hlife, bool harmor, bool hspeed, bool hreload, bool hturretRotation);
		void DrawBar(int32_t x, int32_t y, mscorlib::System::String* text, float procent, int32_t color, int32_t upid, int32_t level, float max, bool drawposlevel);
		bool DrawButtonUpgrade(UnityEngine_CoreModule::UnityEngine::Rect r, float mx, float my, int32_t id, int32_t money);
		mscorlib::System::Collections::IEnumerator* set_upgrade(int32_t wid, int32_t upid);
		mscorlib::System::Collections::IEnumerator* set_timeout();
		void DrawCategory0();
		void DrawCategory1();
		void NextPos(bool end);
		void _ctor();
	};
}

