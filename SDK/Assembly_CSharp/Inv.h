#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "ITEMS_TYPE.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "ITEMS_CATEGORY.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct Inv : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		float lastupdate;
		bool giftlock;
		int32_t x_pos;
		int32_t y_pos;
		int32_t icount;
		float sh;
		int32_t y_cat_ofs;
		Assembly_CSharp::ITEMS_TYPE type;
		IL2CPP::Array<bool>* hovermode;
		UnityEngine_CoreModule::UnityEngine::Texture* rt;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		struct StaticFields
		{
			bool needRefresh;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void myGlobalInit();
		void OnGUI();
		void ResetPos();
		void DrawCategory(Assembly_CSharp::ITEMS_CATEGORY cat);
		void DoWindow(int32_t windowID);
		void DrawCategory0();
		void DrawCategory1();
		void DrawCategory2();
		void DrawCategory3();
		void NextPos(bool end);
		void Update();
		void onActive();
		void OnReloadInv(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		mscorlib::System::Collections::IEnumerator* get_inv();
		mscorlib::System::Collections::IEnumerator* get_gift();
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, Assembly_CSharp::ITEMS_TYPE id);
		void _ctor();
		static void _cctor();
	};
}

