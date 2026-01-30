#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "ITEM.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "ITEMS_THEME.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Assembly_CSharp { struct ItemData; };

namespace Assembly_CSharp
{
	struct ItemsDrawer : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Texture* rt;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPreviewTrooper;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPreviewWeapon;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPreviewVehicle;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPreviewBadge;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPreviewCloak;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPreview;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goPreviewHelmets;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goPreviewSkinMask;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goPreviewMasks;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goPreviewHats;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goPreviewAttaches;
		int32_t SkinID;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Int32>* VehicleSkinID;
		bool HelmetIsActive;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Renderer>* _r;
		float rotate;
		struct StaticFields
		{
			Assembly_CSharp::ItemsDrawer* THIS__;
			int32_t global_discount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void myGlobalInit();
		void DrawItem(int32_t id, Assembly_CSharp::ITEMS_THEME theme, UnityEngine_CoreModule::UnityEngine::Rect r, bool hidecost, bool inoffer);
		void DrawItemReward(int32_t id, Assembly_CSharp::ITEMS_THEME theme, UnityEngine_CoreModule::UnityEngine::Rect r, int32_t _c, bool _can_use);
		mscorlib::System::Collections::IEnumerator* get_gift9();
		mscorlib::System::Collections::IEnumerator* get_gift12();
		mscorlib::System::Collections::IEnumerator* get_gift13();
		mscorlib::System::Collections::IEnumerator* get_gift14();
		mscorlib::System::Collections::IEnumerator* get_gift15();
		mscorlib::System::Collections::IEnumerator* get_gift16();
		mscorlib::System::Collections::IEnumerator* get_gift17();
		mscorlib::System::Collections::IEnumerator* get_gift18();
		void SetModuleIndex(int32_t id, int32_t _module_index);
		void DrawPlayer();
		void SetSkin(int32_t skinid);
		void SetVehicleSkin(int32_t skinid, bool showVehicle);
		void Update();
		void GetInvSkin();
		mscorlib::System::Collections::IEnumerator* get_inv_skin();
		mscorlib::System::Collections::IEnumerator* set_inv_skin();
		mscorlib::System::Collections::IEnumerator* set_tank_skin(int32_t wid, int32_t sid);
		void EquipWeapon(Assembly_CSharp::ItemData* weapon);
		void EquipHelmet();
		void EquipHeadAttach(int32_t _attachID, int32_t _slot, bool _only_visual);
		void ShowVehicle(Assembly_CSharp::ItemData* vehicle);
		mscorlib::System::Collections::IEnumerator* Init();
		void _ctor();
		static void _cctor();
	};
}

