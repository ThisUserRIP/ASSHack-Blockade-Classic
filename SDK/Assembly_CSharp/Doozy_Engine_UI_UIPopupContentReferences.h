#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButton; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopupContentData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIPopupContentReferences : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::UIButton>* Buttons;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* Images;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* Labels;
		int32_t get_ButtonsCount();
		bool get_HasButtons();
		bool get_HasImages();
		bool get_HasLabels();
		int32_t get_ImagesCount();
		int32_t get_LabelsCount();
		void SetButtonsCallbacks(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Events::UnityAction*>* callbacks);
		void SetButtonsLabels(IL2CPP::Array<mscorlib::System::String*>* buttonLabels);
		void SetButtonsNames(IL2CPP::Array<mscorlib::System::String*>* buttonNames);
		void SetContentData(Assembly_CSharp::Doozy::Engine::UI::UIPopupContentData* data);
		void SetImagesSprites(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Sprite*>* sprites);
		void SetLabelsTexts(IL2CPP::Array<mscorlib::System::String*>* labels);
		void _ctor();
	};
}

