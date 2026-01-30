#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };

namespace Facebook_Unity::Facebook::Unity::Canvas
{
	struct ICanvasJSWrapper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* GetSDKVersion();
		void DisableFullScreen();
		void Init(mscorlib::System::String* connectFacebookUrl, mscorlib::System::String* locale, int32_t debug, mscorlib::System::String* initParams, int32_t status);
		void Login(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* scope, mscorlib::System::String* callback_id);
		void Logout();
		void ActivateApp();
		void LogAppEvent(mscorlib::System::String* eventName, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::String* parameters);
		void LogPurchase(float purchaseAmount, mscorlib::System::String* currency, mscorlib::System::String* parameters);
		void Ui(mscorlib::System::String* x, mscorlib::System::String* uid, mscorlib::System::String* callbackMethodName);
		void InitScreenPosition();
	};
}

