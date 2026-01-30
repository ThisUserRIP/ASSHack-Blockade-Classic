#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity::Facebook::Unity
{
	struct Product : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Title_k__BackingField;
		mscorlib::System::String* _ProductID_k__BackingField;
		mscorlib::System::String* _Description_k__BackingField;
		mscorlib::System::String* _ImageURI_k__BackingField;
		mscorlib::System::String* _Price_k__BackingField;
		mscorlib::System::String* _PriceCurrencyCode_k__BackingField;
		void _ctor(mscorlib::System::String* title, mscorlib::System::String* productID, mscorlib::System::String* description, mscorlib::System::String* imageURI, mscorlib::System::String* price, mscorlib::System::String* priceCurrencyCode);
		mscorlib::System::String* get_Title();
		void set_Title(mscorlib::System::String* value);
		mscorlib::System::String* get_ProductID();
		void set_ProductID(mscorlib::System::String* value);
		mscorlib::System::String* get_Description();
		void set_Description(mscorlib::System::String* value);
		mscorlib::System::String* get_ImageURI();
		void set_ImageURI(mscorlib::System::String* value);
		mscorlib::System::String* get_Price();
		void set_Price(mscorlib::System::String* value);
		mscorlib::System::String* get_PriceCurrencyCode();
		void set_PriceCurrencyCode(mscorlib::System::String* value);
		mscorlib::System::String* ToString();
	};
}

