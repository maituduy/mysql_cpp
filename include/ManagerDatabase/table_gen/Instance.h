// generated by ./ddl2cpp /home/mxw/Desktop/out/instance.sql /home/mxw/Desktop/out/table_gen/Instance table
#ifndef TABLE_INSTANCE_H
#define TABLE_INSTANCE_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace table
{
  namespace Instance_
  {
    struct Pk
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pk";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T pk;
            T& operator()() { return pk; }
            const T& operator()() const { return pk; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::bigint, sqlpp::tag::must_not_insert, sqlpp::tag::must_not_update, sqlpp::tag::can_be_null>;
    };
    struct SeriesFk
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "series_fk";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T seriesFk;
            T& operator()() { return seriesFk; }
            const T& operator()() const { return seriesFk; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::bigint, sqlpp::tag::can_be_null>;
    };
    struct SrcodeFk
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "srcode_fk";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T srcodeFk;
            T& operator()() { return srcodeFk; }
            const T& operator()() const { return srcodeFk; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::bigint, sqlpp::tag::can_be_null>;
    };
    struct MediaFk
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "media_fk";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mediaFk;
            T& operator()() { return mediaFk; }
            const T& operator()() const { return mediaFk; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::bigint, sqlpp::tag::can_be_null>;
    };
    struct SopIuid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sop_iuid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sopIuid;
            T& operator()() { return sopIuid; }
            const T& operator()() const { return sopIuid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct SopCuid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sop_cuid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sopCuid;
            T& operator()() { return sopCuid; }
            const T& operator()() const { return sopCuid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct InstNo
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "inst_no";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T instNo;
            T& operator()() { return instNo; }
            const T& operator()() const { return instNo; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct ContentDatetime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "content_datetime";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T contentDatetime;
            T& operator()() { return contentDatetime; }
            const T& operator()() const { return contentDatetime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::can_be_null>;
    };
    struct SrComplete
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sr_complete";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T srComplete;
            T& operator()() { return srComplete; }
            const T& operator()() const { return srComplete; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct SrVerified
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sr_verified";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T srVerified;
            T& operator()() { return srVerified; }
            const T& operator()() const { return srVerified; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct InstCustom1
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "inst_custom1";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T instCustom1;
            T& operator()() { return instCustom1; }
            const T& operator()() const { return instCustom1; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct InstCustom2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "inst_custom2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T instCustom2;
            T& operator()() { return instCustom2; }
            const T& operator()() const { return instCustom2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct InstCustom3
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "inst_custom3";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T instCustom3;
            T& operator()() { return instCustom3; }
            const T& operator()() const { return instCustom3; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct ExtRetrAet
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ext_retr_aet";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T extRetrAet;
            T& operator()() { return extRetrAet; }
            const T& operator()() const { return extRetrAet; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct RetrieveAets
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "retrieve_aets";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T retrieveAets;
            T& operator()() { return retrieveAets; }
            const T& operator()() const { return retrieveAets; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Availability
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "availability";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T availability;
            T& operator()() { return availability; }
            const T& operator()() const { return availability; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct InstStatus
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "inst_status";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T instStatus;
            T& operator()() { return instStatus; }
            const T& operator()() const { return instStatus; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct AllAttrs
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "all_attrs";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T allAttrs;
            T& operator()() { return allAttrs; }
            const T& operator()() const { return allAttrs; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert, sqlpp::tag::require_insert>;
    };
    struct Commitment
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "commitment";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T commitment;
            T& operator()() { return commitment; }
            const T& operator()() const { return commitment; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert, sqlpp::tag::require_insert, sqlpp::tag::require_insert>;
    };
    struct Archived
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "archived";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T archived;
            T& operator()() { return archived; }
            const T& operator()() const { return archived; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert, sqlpp::tag::require_insert, sqlpp::tag::require_insert, sqlpp::tag::require_insert>;
    };
    struct UpdatedTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "updated_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T updatedTime;
            T& operator()() { return updatedTime; }
            const T& operator()() const { return updatedTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::can_be_null>;
    };
    struct CreatedTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "created_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T createdTime;
            T& operator()() { return createdTime; }
            const T& operator()() const { return createdTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::can_be_null>;
    };
    struct InstAttrs
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "inst_attrs";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T instAttrs;
            T& operator()() { return instAttrs; }
            const T& operator()() const { return instAttrs; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
  } // namespace Instance_

  struct Instance: sqlpp::table_t<Instance,
               Instance_::Pk,
               Instance_::SeriesFk,
               Instance_::SrcodeFk,
               Instance_::MediaFk,
               Instance_::SopIuid,
               Instance_::SopCuid,
               Instance_::InstNo,
               Instance_::ContentDatetime,
               Instance_::SrComplete,
               Instance_::SrVerified,
               Instance_::InstCustom1,
               Instance_::InstCustom2,
               Instance_::InstCustom3,
               Instance_::ExtRetrAet,
               Instance_::RetrieveAets,
               Instance_::Availability,
               Instance_::InstStatus,
               Instance_::AllAttrs,
               Instance_::Commitment,
               Instance_::Archived,
               Instance_::UpdatedTime,
               Instance_::CreatedTime,
               Instance_::InstAttrs>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "instance";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T instance;
        T& operator()() { return instance; }
        const T& operator()() const { return instance; }
      };
    };
  };
} // namespace table
#endif