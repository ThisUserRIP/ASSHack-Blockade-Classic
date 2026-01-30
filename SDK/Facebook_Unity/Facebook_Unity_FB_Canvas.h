#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_FB.h"
namespace Facebook_Unity::Facebook::Unity { struct FB; };
namespace Facebook_Unity::Facebook::Unity { struct IPayFacebook; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace Facebook_Unity::Facebook::Unity { struct IPayResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FB_Canvas : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Facebook_Unity::Facebook::Unity::IPayFacebook* get_FacebookPayImpl();
		static void Pay(mscorlib::System::String* product, mscorlib::System::String* action, int32_t quantity, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMin, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMax, mscorlib::System::String* requestId, mscorlib::System::String* pricepointId, mscorlib::System::String* testCurrency, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayResult>* callback);
	};
}

