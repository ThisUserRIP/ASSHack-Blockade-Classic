#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };

namespace Facebook_Unity::Facebook::Unity
{
	struct ResultBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Error_k__BackingField;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* _ErrorDictionary_k__BackingField;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* _ResultDictionary_k__BackingField;
		mscorlib::System::String* _RawResult_k__BackingField;
		bool _Cancelled_k__BackingField;
		mscorlib::System::String* _CallbackId_k__BackingField;
		mscorlib::System::Nullable_1<mscorlib::System::Int64> _CanvasErrorCode_k__BackingField;
		void _ctor(Facebook_Unity::Facebook::Unity::ResultContainer* result);
		void _ctor(Facebook_Unity::Facebook::Unity::ResultContainer* result, mscorlib::System::String* error, bool cancelled);
		mscorlib::System::String* get_Error();
		void set_Error(mscorlib::System::String* value);
		void set_ErrorDictionary(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* value);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* get_ResultDictionary();
		void set_ResultDictionary(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* value);
		mscorlib::System::String* get_RawResult();
		void set_RawResult(mscorlib::System::String* value);
		bool get_Cancelled();
		void set_Cancelled(bool value);
		mscorlib::System::String* get_CallbackId();
		void set_CallbackId(mscorlib::System::String* value);
		mscorlib::System::Nullable_1<mscorlib::System::Int64> get_CanvasErrorCode();
		void set_CanvasErrorCode(mscorlib::System::Nullable_1<mscorlib::System::Int64> value);
		mscorlib::System::String* ToString();
		void Init(Facebook_Unity::Facebook::Unity::ResultContainer* result, mscorlib::System::String* error, bool cancelled, mscorlib::System::String* callbackId);
		static mscorlib::System::String* GetErrorValue(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* result);
		static bool GetCancelledValue(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* result);
		static mscorlib::System::String* GetCallbackId(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* result);
	};
}

