﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include <regex>
#include "XamlTypeInfo.g.h"



        // XamlTypeInfoProvider
        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::GetXamlTypeByType(::Windows::UI::Xaml::Interop::TypeName type)
        {
            auto xamlType = GetXamlTypeByName(type.Name);
            ::XamlTypeInfo::InfoProvider::XamlUserType^ userXamlType = dynamic_cast<::XamlTypeInfo::InfoProvider::XamlUserType^>(xamlType);
            if (xamlType == nullptr || (userXamlType != nullptr && userXamlType->IsReturnTypeStub))
            {
                ::Windows::UI::Xaml::Markup::IXamlType^ libXamlType  = CheckOtherMetadataProvidersForType(type);
                if (libXamlType != nullptr)
                {
                    if(libXamlType->IsConstructible || xamlType == nullptr)
                    {
                        xamlType = libXamlType;
                    }
                }
            }
            return xamlType;
        }

        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::GetXamlTypeByName(::Platform::String^ typeName)
        {
            if (typeName == nullptr || typeName->IsEmpty())
            {
                return nullptr;
            }

            auto val = _xamlTypes.find(typeName);
            ::Windows::UI::Xaml::Markup::IXamlType^ xamlType = nullptr;
            if (val != _xamlTypes.end())
            {
                xamlType = (val->second).Resolve<::Windows::UI::Xaml::Markup::IXamlType>();
                if(xamlType != nullptr)
                {
                    return xamlType;
                }
            }

            xamlType = CreateXamlType(typeName);
            ::XamlTypeInfo::InfoProvider::XamlUserType^ userXamlType = dynamic_cast<::XamlTypeInfo::InfoProvider::XamlUserType^>(xamlType);
            if (xamlType == nullptr || (userXamlType != nullptr && userXamlType->IsReturnTypeStub))
            {
                ::Windows::UI::Xaml::Markup::IXamlType^ libXamlType  = CheckOtherMetadataProvidersForName(typeName);
                if (libXamlType != nullptr)
                {
                    if(libXamlType->IsConstructible || xamlType == nullptr)
                    {
                        xamlType = libXamlType;
                    }
                }
            }


            if (xamlType != nullptr)
            {
                Platform::WeakReference wr(xamlType);
                _xamlTypes[xamlType->FullName] =  wr;
            }
            return xamlType;
        }

        ::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::GetMemberByLongName(::Platform::String^ longMemberName)
        {
            if (longMemberName == nullptr || longMemberName->IsEmpty())
            {
                return nullptr;
            }

            auto val = _xamlMembers.find(longMemberName);
            if (val != _xamlMembers.end())
            {
                return val->second;
            }

            auto xamlMember = CreateXamlMember(longMemberName);

            if (xamlMember != nullptr)
            {
                _xamlMembers[longMemberName] = xamlMember;
            }
            return xamlMember;
        }

        // XamlSystemBaseType
        ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::XamlSystemBaseType(::Platform::String^ name) :
            _fullName(name)
        {
        }

        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::BaseType::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        ::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::ContentProperty::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        ::Platform::String^ ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::FullName::get()
        {
            return _fullName;
        }

        ::Platform::String^ ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::Name::get()
        {
            const wchar_t* seperator = wcsrchr(_fullName->Data(), '.');
            if (seperator == nullptr)
            {
                return _fullName;
            }
            return ref new ::Platform::String(seperator);
        }

        bool ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::IsArray::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::IsCollection::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::IsConstructible::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::IsDictionary::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::IsMarkupExtension::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::IsEnum::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::IsSystemType::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::IsBindable::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::ItemType::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::KeyType::get()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        ::Windows::UI::Xaml::Interop::TypeName (::XamlTypeInfo::InfoProvider::XamlSystemBaseType::UnderlyingType::get)()
        {
            ::Windows::UI::Xaml::Interop::TypeName typeName;

            typeName.Name = _fullName;
            typeName.Kind = ::Windows::UI::Xaml::Interop::TypeKind::Primitive;

            return typeName;
        }

        ::Platform::Object^ ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::ActivateInstance()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        ::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::GetMember(::Platform::String^)
        {
            throw ref new ::Platform::NotImplementedException;
        }

        void ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::AddToVector(::Platform::Object^, ::Platform::Object^)
        {
            throw ref new ::Platform::NotImplementedException;
        }

        void ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::AddToMap(::Platform::Object^, ::Platform::Object^, ::Platform::Object^)
        {
            throw ref new ::Platform::NotImplementedException;
        }

        void ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::RunInitializer()
        {
            throw ref new ::Platform::NotImplementedException;
        }

        ::Platform::Object^ ::XamlTypeInfo::InfoProvider::XamlSystemBaseType::CreateFromString(::Platform::String^)
        {
            throw ref new ::Platform::NotImplementedException;
        }

        //XamlUserType
        ::XamlTypeInfo::InfoProvider::XamlUserType::XamlUserType(::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider^ provider, ::Platform::String^ fullName, ::Windows::UI::Xaml::Markup::IXamlType^ baseType) :
            _isArray(false),
            _isMarkupExtension(false),
            _isEnum(false),
            _isBindable(false),
            _isReturnTypeStub(false),
            _fullName(fullName),
            _provider(provider),
            _baseType(baseType)
        {
        }

        ::Platform::String^ ::XamlTypeInfo::InfoProvider::XamlUserType::FullName::get()
        {
            return _fullName;
        }

        ::Platform::String^ ::XamlTypeInfo::InfoProvider::XamlUserType::Name::get()
        {
            const wchar_t *seperator = wcsrchr(_fullName->Data(), '.');
            if (seperator == nullptr)
            {
                return _fullName;
            }
            return ref new ::Platform::String(seperator);
        }

        ::Windows::UI::Xaml::Interop::TypeName (::XamlTypeInfo::InfoProvider::XamlUserType::UnderlyingType::get)()
        {
            ::Windows::UI::Xaml::Interop::TypeName typeName;

            typeName.Name = _fullName;
            typeName.Kind = KindOfType;

            return typeName;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlUserType::IsSystemType::get()
        {
            return true;
        }

        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlUserType::BaseType::get()
        {
            return _baseType;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlUserType::IsArray::get()
        {
            return _isArray;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlUserType::IsCollection::get()
        {
            return CollectionAdd != nullptr;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlUserType::IsConstructible::get()
        {
            return Activator != nullptr;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlUserType::IsDictionary::get()
        {
            return DictionaryAdd != nullptr;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlUserType::IsMarkupExtension::get()
        {
            return _isMarkupExtension;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlUserType::IsEnum::get()
        {
            return _isEnum;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlUserType::IsBindable::get()
        {
            return _isBindable;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlUserType::IsReturnTypeStub::get()
        {
            return _isReturnTypeStub;
        }

        ::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlUserType::ContentProperty::get()
        {
            return _provider->GetMemberByLongName(_contentPropertyName);
        }

        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlUserType::ItemType::get()
        {
            return _provider->GetXamlTypeByName(_itemTypeName);
        }

        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlUserType::KeyType::get()
        {
            return _provider->GetXamlTypeByName(_keyTypeName);
        }

        ::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlUserType::GetMember(::Platform::String^ name)
        {
            auto val = _memberNames.find(name);
            if (val != _memberNames.end())
            {
                return _provider->GetMemberByLongName(val->second);
            }
            return nullptr;
        }

        ::Platform::Object^ ::XamlTypeInfo::InfoProvider::XamlUserType::ActivateInstance()
        {
            return Activator();
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::AddToMap(::Platform::Object^ instance, ::Platform::Object^ key, ::Platform::Object^ item)
        {
            DictionaryAdd(instance, key, item);
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::AddToVector(::Platform::Object^ instance, ::Platform::Object^ item)
        {
            CollectionAdd(instance, item);
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::RunInitializer()
        {
            // The C++ runtime will have already run all the Static Initializers at start up.
        }

        ::Platform::Object^ ::XamlTypeInfo::InfoProvider::XamlUserType::CreateFromString(::Platform::String^ input)
        {
            return FromStringConverter(this, input);
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::SetContentPropertyName(::Platform::String^ contentPropertyName)
        {
            _contentPropertyName = contentPropertyName;
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::SetIsArray()
        {
            _isArray = true;
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::SetIsMarkupExtension()
        {
            _isMarkupExtension = true;
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::SetIsEnum()
        {
            _isEnum = true;
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::SetIsBindable()
        {
            _isBindable = true;
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::SetIsReturnTypeStub()
        {
            _isReturnTypeStub = true;
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::SetItemTypeName(::Platform::String^ itemTypeName)
        {
            _itemTypeName = itemTypeName;
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::SetKeyTypeName(::Platform::String^ keyTypeName)
        {
            _keyTypeName = keyTypeName;
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::AddMemberName(::Platform::String^ shortName)
        {
            _memberNames[shortName] = FullName + "." + shortName;
        }

        void ::XamlTypeInfo::InfoProvider::XamlUserType::AddEnumValue(::Platform::String^ name, ::Platform::Object^ value)
        {
            _enumValues[name->Data()] = value;
        }

        ::default::uint32 (::XamlTypeInfo::InfoProvider::XamlUserType::CreateEnumUIntFromString)(::Platform::String^ input)
        {
            bool found = false;

            const std::wregex regularExpression(L"^\\s+|\\s*,\\s*|\\s+$");
            uint32 val = 0;

            for (std::wcregex_token_iterator it(input->Begin(), input->End(), regularExpression, -1), end; it != end; ++it)
            {
                const std::wcsub_match& subMatch = *it;

                if (subMatch.length() == 0 )
                {
                    continue;
                }

                std::wstring lookup(subMatch.first, (unsigned int)subMatch.length());

                try
                {
                    auto entry = _enumValues.find(lookup);
                    if (entry != _enumValues.end())
                    {
                        const auto f = entry->second;
                        val |= safe_cast<int>(f);
                    }
                    else
                    {
                        val |= std::stoi(subMatch);
                    }
                    found=true;
                }
                catch (const std::invalid_argument& )
                {
                    found = false;
                    break;
                }
            }

            if(found)
            {
                return val;
            }
            throw ref new ::Platform::InvalidArgumentException();
        }

        // XamlMember
        ::XamlTypeInfo::InfoProvider::XamlMember::XamlMember(::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider^ provider, ::Platform::String^ name, ::Platform::String^ typeName) :
            _isAttachable(false),
            _isDependencyProperty(false),
            _isReadOnly(false),
            _name(name),
            _typeName(typeName),
            _provider(provider)
        {
        }

        void ::XamlTypeInfo::InfoProvider::XamlMember::SetIsAttachable()
        {
            _isAttachable = true;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlMember::IsAttachable::get()
        {
            return _isAttachable;
        }

        void ::XamlTypeInfo::InfoProvider::XamlMember::SetIsDependencyProperty()
        {
            _isDependencyProperty = true;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlMember::IsDependencyProperty::get()
        {
            return _isDependencyProperty;
        }

        void ::XamlTypeInfo::InfoProvider::XamlMember::SetIsReadOnly()
        {
            _isReadOnly = true;
        }

        bool ::XamlTypeInfo::InfoProvider::XamlMember::IsReadOnly::get()
        {
            return _isReadOnly;
        }

        ::Platform::String^ ::XamlTypeInfo::InfoProvider::XamlMember::Name::get()
        {
            return _name;
        }

        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlMember::Type::get()
        {
            return _provider->GetXamlTypeByName(_typeName);
        }

        void ::XamlTypeInfo::InfoProvider::XamlMember::SetTargetTypeName(::Platform::String^ targetTypeName)
        {
            _targetTypeName = targetTypeName;
        }

        ::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlMember::TargetType::get()
        {
            return _provider->GetXamlTypeByName(_targetTypeName);
        }

        ::Platform::Object^ ::XamlTypeInfo::InfoProvider::XamlMember::GetValue(::Platform::Object^ instance)
        {
            if (Getter != nullptr)
            {
                return Getter(instance);
            }
            throw ref new ::Platform::NullReferenceException();
        }

        void ::XamlTypeInfo::InfoProvider::XamlMember::SetValue(::Platform::Object^ instance, ::Platform::Object^ value)
        {
            if (Setter != nullptr)
            {
                Setter(instance, value);
                return;
            }
            throw ref new ::Platform::NullReferenceException();
        }

