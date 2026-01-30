#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct WeaponSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct E_Menu : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector2;
		UnityEngine_CoreModule::UnityEngine::Texture* Title_Background;
		UnityEngine_CoreModule::UnityEngine::Texture* Tab_Background;
		UnityEngine_CoreModule::UnityEngine::Texture* Active_Tab_Background;
		UnityEngine_CoreModule::UnityEngine::Texture* Tab_Background_Hover;
		UnityEngine_CoreModule::UnityEngine::Texture* Tab_Background_Active;
		UnityEngine_CoreModule::UnityEngine::Texture* Item_Background;
		UnityEngine_CoreModule::UnityEngine::Texture* Item_Name_Background;
		UnityEngine_CoreModule::UnityEngine::Texture* Category_Background;
		UnityEngine_CoreModule::UnityEngine::Texture* Item_Background_Hover;
		UnityEngine_CoreModule::UnityEngine::Texture* Item_Bar_Red;
		UnityEngine_CoreModule::UnityEngine::Texture* Item_Bar_Blue;
		UnityEngine_CoreModule::UnityEngine::Texture* Item_Bar_Sharp;
		UnityEngine_CoreModule::UnityEngine::Texture* Play_Button_Normal;
		UnityEngine_CoreModule::UnityEngine::Texture* Play_Button_Hover;
		UnityEngine_CoreModule::UnityEngine::Texture2D* Border;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* Tabs;
		UnityEngine_CoreModule::UnityEngine::Rect Title_Background_Rect;
		UnityEngine_CoreModule::UnityEngine::Rect Play_Button_Rect;
		UnityEngine_CoreModule::UnityEngine::Rect Tabs_Rect;
		UnityEngine_CoreModule::UnityEngine::Rect Active_Item_Rect;
		UnityEngine_CoreModule::UnityEngine::Rect Inactive_Space_Rect;
		UnityEngine_CoreModule::UnityEngine::Rect Active_Tab_Rect;
		UnityEngine_CoreModule::UnityEngine::Rect Active_Item_Rect1;
		UnityEngine_CoreModule::UnityEngine::Rect Active_Item_Rect2;
		UnityEngine_CoreModule::UnityEngine::Rect Active_Item_Rect3;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* Tabs_Rects;
		bool In_Play_Button_Rect;
		bool In_Tab_Rect;
		IL2CPP::Array<bool>* TabsActive;
		IL2CPP::Array<bool>* TabsHover;
		IL2CPP::Array<mscorlib::System::String*>* TabsNames;
		IL2CPP::Array<mscorlib::System::String*>* WeaponBarsNames;
		IL2CPP::Array<mscorlib::System::String*>* VehicleBarsNames;
		IL2CPP::Array<mscorlib::System::String*>* WeaponsCategoryNames;
		int32_t x;
		int32_t y;
		int32_t koef;
		int32_t Inactive_Tabs_Space_X;
		int32_t Active_Tab_Index;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, IL2CPP::Array<mscorlib::System::Int32>>* SelectedItem;
		int32_t Active_Item_PodIndex;
		int32_t x_pos;
		int32_t y_pos;
		int32_t icount;
		float sh;
		UnityEngine_CoreModule::UnityEngine::Vector2 mousePos;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::WeaponSystem* m_WeaponSystem;
		void Start();
		void Init();
		void Draw_E_Menu();
		void Draw_Background();
		void Draw_Borders(UnityEngine_CoreModule::UnityEngine::Rect _rect, bool left, bool top, bool right, bool bottom);
		void Draw_Play_Button();
		void Draw_Tabs();
		void Draw_Active_Tab();
		void Draw_Melee();
		void Draw_Primary();
		void Draw_Secondary();
		void Draw_Ammunition();
		void Draw_Vehicles();
		void NextPos(bool end);
		void NextYPos(bool end);
		void ResetPos();
		void DrawCategory(mscorlib::System::String* _text, int32_t _cols, bool _ending);
		void DrawItem(int32_t index, int32_t _Active_Item_PodIndex);
		void DrawVehicle(int32_t index, int32_t _Active_Item_PodIndex);
		void Draw_Active_Item();
		void Draw_Active_Vehicle();
		void DrawBar(int32_t i);
		void DrawVehicleBar(int32_t i);
		void SetPadding(int32_t _top, int32_t _right, int32_t _bottom, int32_t _left);
		int32_t GetWeaponByID(int32_t newID, int32_t oldItemID);
		void _ctor();
	};
}

