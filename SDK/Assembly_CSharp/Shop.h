#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Assembly_CSharp { struct ItemData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "ITEMS_CATEGORY.h"
#include "ITEMS_THEME.h"
#include "ITEMS_TYPE.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp
{
	struct Shop : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		bool can_buy;
		int32_t type;
		IL2CPP::Array<bool>* hovermode;
		mscorlib::System::String* message;
		mscorlib::System::String* otvet;
		bool orderWaiting;
		float orderWaitingTime;
		uint64_t orderID;
		float runCallback;
		bool offerType;
		Assembly_CSharp::ItemData* currItem;
		int32_t x_pos;
		int32_t y_pos;
		int32_t icount;
		float sh;
		int32_t y_cat_ofs;
		float buytime;
		int32_t rand;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		struct StaticFields
		{
			Assembly_CSharp::Shop* THIS__;
			int32_t SpecialOfferTimer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void myGlobalInit();
		void onActive();
		void OnGUI();
		void DoWindow(int32_t windowID);
		void DrawPremuim();
		void DrawMegapack();
		void ResetPos();
		void DrawCategory(Assembly_CSharp::ITEMS_CATEGORY cat);
		void DrawTheme(Assembly_CSharp::ITEMS_THEME theme, Assembly_CSharp::ITEMS_TYPE t);
		void DrawOffer();
		void DrawMessage();
		void DrawActiveItem();
		void OnBuyItem(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void DrawBar(int32_t x, int32_t y, mscorlib::System::String* text, float procent, int32_t color);
		void DrawItemData();
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id, int32_t length);
		void DrawCategory0();
		void DrawCategory1();
		void DrawCategory2();
		void DrawCategory3();
		void DrawCategory4();
		void NextPos(bool end);
		void OnSelectItem(Assembly_CSharp::ItemData* item, bool inoffer);
		void _ctor();
		static void _cctor();
	};
}

