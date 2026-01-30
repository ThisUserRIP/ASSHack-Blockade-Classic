#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Inventory.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Facepunch_Steamworks_Inventory_Recipe.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Recipe; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Definition; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory_Definition : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory* inventory;
		int32_t _Id_k__BackingField;
		mscorlib::System::String* _Name_k__BackingField;
		mscorlib::System::String* _Description_k__BackingField;
		mscorlib::System::String* _IconUrl_k__BackingField;
		mscorlib::System::String* _IconLargeUrl_k__BackingField;
		mscorlib::System::String* _Type_k__BackingField;
		mscorlib::System::String* _ExchangeSchema_k__BackingField;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe>* _Recipes_k__BackingField;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe>* _IngredientFor_k__BackingField;
		mscorlib::System::DateTime _Created_k__BackingField;
		mscorlib::System::DateTime _Modified_k__BackingField;
		mscorlib::System::String* _PriceCategory_k__BackingField;
		double _PriceDollars_k__BackingField;
		double _LocalPrice_k__BackingField;
		mscorlib::System::String* _LocalPriceFormatted_k__BackingField;
		bool _Marketable_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* customProperties;
		int32_t get_Id();
		void set_Id(int32_t value);
		void set_Name(mscorlib::System::String* value);
		void set_Description(mscorlib::System::String* value);
		void set_IconUrl(mscorlib::System::String* value);
		void set_IconLargeUrl(mscorlib::System::String* value);
		void set_Type(mscorlib::System::String* value);
		mscorlib::System::String* get_ExchangeSchema();
		void set_ExchangeSchema(mscorlib::System::String* value);
		void set_Recipes(IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe>* value);
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe>* get_IngredientFor();
		void set_IngredientFor(IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe>* value);
		void set_Created(mscorlib::System::DateTime value);
		void set_Modified(mscorlib::System::DateTime value);
		mscorlib::System::String* get_PriceCategory();
		void set_PriceCategory(mscorlib::System::String* value);
		void set_PriceDollars(double value);
		void set_LocalPrice(double value);
		void set_LocalPriceFormatted(mscorlib::System::String* value);
		void set_Marketable(bool value);
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Inventory* i, int32_t id);
		template <typename T> T* GetProperty(mscorlib::System::String* name)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProperty", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)name;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		mscorlib::System::String* GetStringProperty(mscorlib::System::String* name);
		bool GetBoolProperty(mscorlib::System::String* name);
		void SetupCommonProperties();
		void Link(IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition*>* definitions);
		void LinkExchange(IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition*>* definitions);
		void InRecipe(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe r);
		void UpdatePrice();
	};
}

