#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace Facebook_Unity::Facebook::Unity
{
	struct Purchase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _IsConsumed_k__BackingField;
		mscorlib::System::String* _DeveloperPayload_k__BackingField;
		mscorlib::System::String* _PaymentID_k__BackingField;
		mscorlib::System::String* _ProductID_k__BackingField;
		mscorlib::System::DateTime _PurchaseTime_k__BackingField;
		mscorlib::System::String* _PurchaseToken_k__BackingField;
		mscorlib::System::String* _SignedRequest_k__BackingField;
		void _ctor(bool isConsumed, mscorlib::System::String* developerPayload, mscorlib::System::String* paymentID, mscorlib::System::String* productID, int64_t purchaseTime, mscorlib::System::String* purchaseToken, mscorlib::System::String* signedRequest);
		bool get_IsConsumed();
		mscorlib::System::String* get_DeveloperPayload();
		void set_DeveloperPayload(mscorlib::System::String* value);
		mscorlib::System::String* get_PaymentID();
		void set_PaymentID(mscorlib::System::String* value);
		mscorlib::System::String* get_ProductID();
		void set_ProductID(mscorlib::System::String* value);
		mscorlib::System::DateTime get_PurchaseTime();
		void set_PurchaseTime(mscorlib::System::DateTime value);
		mscorlib::System::String* get_PurchaseToken();
		void set_PurchaseToken(mscorlib::System::String* value);
		mscorlib::System::String* get_SignedRequest();
		void set_SignedRequest(mscorlib::System::String* value);
		mscorlib::System::String* ToString();
	};
}

