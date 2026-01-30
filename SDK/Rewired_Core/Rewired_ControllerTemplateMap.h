#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Rewired_Core::Rewired { struct ControllerTemplateActionElementMap; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplateMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _reInputId;
		int32_t _id;
		mscorlib::System::Guid _templateTypeGuid;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerTemplateActionElementMap>* _elementMaps;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::ControllerTemplateActionElementMap>* _elementMaps_readOnly;
		bool _enabled;
		int32_t _categoryId;
		int32_t _layoutId;
		int32_t _sourceMapId;
		struct StaticFields
		{
			int32_t __idCounter;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Guid templateTypeGuid);
		void _ctor(mscorlib::System::Guid templateTypeGuid, int32_t categoryId, int32_t layoutId, int32_t sourceMapId);
		int32_t get_id();
		mscorlib::System::Guid get_templateTypeGuid();
		bool get_enabled();
		void set_enabled(bool value);
		int32_t get_categoryId();
		void set_categoryId(int32_t value);
		int32_t get_layoutId();
		void set_layoutId(int32_t value);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateActionElementMap>* get_ElementMaps();
		mscorlib::System::String* ToXmlString();
		mscorlib::System::String* ToJsonString();
		Rewired_Core::Rewired::ControllerMap* ToControllerMap(Rewired_Core::Rewired::Controller* controller);
		void ExportDataToSerializedObject(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject);
		void Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject);
		void Clear();
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* Export();
		void AddElementMap(Rewired_Core::Rewired::ControllerTemplateActionElementMap* elementMap);
		static Rewired_Core::Rewired::ControllerTemplateMap* FromControllerMap(Rewired_Core::Rewired::IControllerTemplate* controllerTemplate, Rewired_Core::Rewired::ControllerMap* controllerMap);
		static Rewired_Core::Rewired::ControllerTemplateMap* FromXml(mscorlib::System::String* xmlString);
		static Rewired_Core::Rewired::ControllerTemplateMap* FromJson(mscorlib::System::String* jsonString);
		static Rewired_Core::Rewired::ControllerTemplateMap* FromSerializedData(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject);
		static void _cctor();
	};
}

