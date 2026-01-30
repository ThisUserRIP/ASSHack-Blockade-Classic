#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct ActionItem; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct Purchase; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "NETWORK.h"
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace Facebook_Unity::Facebook::Unity { struct IPayResult; };

namespace Assembly_CSharp
{
	struct Gold : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		int32_t type;
		IL2CPP::Array<bool>* hovermode;
		IL2CPP::Array<bool>* hover;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::ActionItem>* ActionItems;
		bool _show_canceled;
		bool show_canceled;
		bool history_loaded;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		int32_t sh;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Purchase>* Purchases;
			bool WaitingForResponce;
			float WaitingTimer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void myGlobalInit();
		void OnGUI();
		void Update();
		void DoWindow(int32_t windowID);
		void DrawBuyButton(int32_t itemID, int32_t offY);
		void DrawActions();
		void DrawCoins();
		void DrawNovalinkOffers(int32_t dis);
		void DrawMyGamesOffers(int32_t dis);
		void DrawHistory();
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id);
		void DrawLine(float golos, int32_t money, int32_t bonus, int32_t newmoney, int32_t discount, int32_t itemid, int32_t id, Assembly_CSharp::NETWORK network);
		void DrawHistoryLine(int32_t _pos);
		mscorlib::System::Collections::IEnumerator* ReInit();
		void OnPurchaseHistory(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		static void OnSteamBuyItem(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		static void OnSteamBuyItemFinish(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void _ctor();
		static void _cctor();
		void _DrawBuyButton_b__16_0(Facebook_Unity::Facebook::Unity::IPayResult* response);
		void _DrawLine_b__24_0(Facebook_Unity::Facebook::Unity::IPayResult* response);
	};
}

